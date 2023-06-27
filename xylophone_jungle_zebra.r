# creating a new data frame with 2000 observations
df <- data.frame(matrix(rnorm(4 * 2000, mean = 5, sd = 10), ncol = 4))

# giving names to the columns 
colnames(df) <- c("Mountain", "Sea", "Forest", "Desert")
 
# function to get indices of the observations with the mean smaller than 5
getMean <- function(x) {
  indx <- which(rowMeans(x) < 5)
  return(indx)
}

# applying the function to the data frame
indices <- getMean(df)

# setting up a loop to return the indices with the mean smaller than 5
for(i in 1:length(indices)) {
  message(paste("Nature is calling at", df[indices[i], ]))
}

# setting up a loop to return the observations with the mean larger than 5
for(i in 1:nrow(df)) {
  if(rowMeans(df[i, ]) > 5) {
    message(paste("Nature has been here before at", df[i, ]))
  }
}