//Nature's Calling

//1
console.log('The trees sway in the wind, calling nature's song.');

//2
const natureSongs = ['birdsong', 'crickets', 'waterfall'];

//3
console.log('Nature is singing its songs:');

//4
for (let i = 0; i < natureSongs.length; i++) {
  console.log(`${i+1}. ${natureSongs[i]}`);
}

//5
const birds = [];

//6
function addBird(bird) {
birds.push(bird);
}

//7
addBird('robin');
addBird('shrike');
addBird('sparrow');

//8
console.log('A parade of birds fly by:');

//9
for (const bird of birds) {
  console.log(bird);
}

//10
function createTree(height, species) {
   const tree = {
    height,
    species
   };
   return tree;
}

//11
const pineTree = createTree(50, 'pine');

//12
console.log(`A tall ${pineTree.species} tree stands before you, reaching ${pineTree.height} feet into the sky.`);

//13
function createAnimal(name, type, color) {
  const animal = {
   name,
   type,
   color
  };
  return animal;
}

//14
const rabbit = createAnimal('Rory', 'rabbit', 'white');

//15
console.log(`A ${rabbit.color} ${rabbit.type} named ${rabbit.name} hops by.`);

//16
let numOfButterflies = 0;

//17
while (numOfButterflies < 5) {
  numOfButterflies++;
  console.log('A butterfly flutters by.');
}

//18
const clouds = ['whispy', 'shapeless', 'cotton candy'];

//19
console.log('The sky is dotted with clouds:');

//20
for (let i = 0; i < clouds.length; i++) {
  console.log(`${i+1}. ${clouds[i]}`);
}

//21
function beeBuzz(numOfBees) {
  for (let i = 0; i < numOfBees; i++) {
    console.log(`Buzz! I am bee number ${i + 1}.`);
  }
}

//22
beeBuzz(3);

//23
const sun = {
  visible: true
};

//24
if (sun.visible) {
  console.log('The sun shines bright in the sky.');
}

//25
function createLeaf(shape, color, size) {
  const leaf = {
   shape,
   color,
   size
  };
  return leaf;
}

//26
const mapleLeaf = createLeaf('teardrop', 'orange', 'small');

//27
console.log(`A ${mapleLeaf.color} ${mapleLeaf.shape}-shaped leaf, ${mapleLeaf.size} in size, flutters down from the tree.`);

//28
const animals = [];

//29
function addAnimal(animal) {
  animals.push(animal);
}

//30
addAnimal(rabbit);
addAnimal(createAnimal('Toby', 'tortoise', 'green'));
addAnimal(createAnimal('Snuffles', 'dog', 'brown'));

//31
console.log('Other animals can be seen in the distance:');

//32
for (const animal of animals) {
  console.log(`${animal.name}, the ${animal.color} ${animal.type}.`);
}

//33
const wind = {
  speed: 10,
  direction: 'west'
};

//34
console.log(`The wind is blowing from the ${wind.direction} at ${wind.speed} miles per hour.`);

//35
let numOfSquirrels = 0;

//36
while (numOfSquirrels < 5) {
  numOfSquirrels++;
  console.log('A squirrel scurries up a tree.');
}

//37
const rocks = [];

//38
function addRock(rock) {
  rocks.push(rock);
}

//39
addRock('granite');
addRock('gneiss');
addRock('basalt');

//40
console.log('Different rocks are scattered around:');

//41
for (const rock of rocks) {
  console.log(rock);
}

//42
function createGrass(texture, color, height) {
   const grass = {
    texture,
    color,
    height
   };
   return grass;
}

//43
const greenGrass = createGrass('soft', 'green', 2);

//44
console.log(`The grass beneath you is a ${greenGrass.color} cushion of ${greenGrass.texture} blades, reaching ${greenGrass.height} inches high.`);

//45
console.log('The air is alive with the sound of nature.');

//46
function createLake(depth, width, length) {
   const lake = {
    depth,
    width,
    length
   };
   return lake;
}

//47
const blueLake = createLake(50, 400, 1000);

//48
console.log(`A lake sits in the distance, ${blueLake.depth} feet deep, ${blueLake.width} feet wide and ${blueLake.length} feet long.`);

//49
let numOfInsects = 0;

//50
while (numOfInsects < 5) {
  numOfInsects++;
  console.log('The sound of an insect hums in the air.');
}

//51
const plants = ['fern', 'moss', 'bushes', 'trees'];

//52
console.log('Plants of all shapes and sizes grow around you:');

//53
for (let i = 0; i < plants.length; i++) {
  console.log(`${i+1}. ${plants[i]}`);
}

//54
function createMushroom(color, shape) {
   const mushroom = {
    color,
    shape
   };
   return mushroom;
}

//55
const redMushroom = createMushroom('red', 'spotted');

//56
console.log(`A ${redMushroom.color} mushroom with ${redMushroom.shape} patterns stands before you.`);

//57
let numOfBees = 0;

//58
while (numOfBees < 5) {
  numOfBees++;
  console.log('A bee buzzes nearby.');
}

//59
const sunBeams = ['glistening', 'golden', 'warm'];

//60
console.log('The sun sends rays of light through the trees:');

//61
for (let i = 0; i < sunBeams.length; i++) {
  console.log(`${i+1}. ${sunBeams[i]}`);
}

//62
function createStream(length, width) {
   const stream = {
    length,
    width
   };
   return stream;
}

//63
const smallStream = createStream(20, 3);

//64
console.log(`A bubbling stream runs through the area, ${smallStream.length} feet long and ${smallStream.width} feet wide.`);

//65
const animals2 = [];

//66
function addAnimal2(animal) {
  animals2.push(animal);
}

//67
addAnimal2(createAnimal('Tippy', 'deer', 'grey'));
addAnimal2(createAnimal('Wally', 'fox', 'orange'));
addAnimal2(createAnimal('Ellie', 'elephant', 'grey'));

//68
console.log('Wild animals roam the area:');

//69
for (const animal of animals2) {
  console.log(`${animal.name}, the ${animal.color} ${animal.type}.`);
}

//70
let numOfTrees = 0;

//71
while (numOfTrees < 5) {
  numOfTrees++;
  console.log('A tall tree stands before you.');
}

//72
const sky = ['bright blue', 'sunny', 'clear'];

//73
console.log('The sky is a blanket of:');

//74
for (let i = 0; i < sky.length; i++) {
  console.log(`${i+1}. ${sky[i]}`);
}

//75
function createPond(depth, circumference) {
   const pond = {
    depth,
    circumference
   };
   return pond;
}

//76
const deepPond = createPond(10, 250);

//77
console.log(`A pond lies in the distance, ${deepPond.depth} feet deep and ${deepPond.circumference} feet in circumference.`);

//78
let numOfFrogs = 0;

//79
while (numOfFrogs < 5) {
  numOfFrogs++;
  console.log('The sound of frogs croaking can be heard.');
}

//80
const shrubs = ['evergreen', 'rhododendron', 'dwarf'];

//81
console.log('Shrubs of all shapes and sizes grow around you:');

//82
for (let i = 0; i < shrubs.length; i++) {
  console.log(`${i+1}. ${shrubs[i]}`);
}

//83
function createOwl(species, color) {
   const owl = {
    species,
    color
   };
   return owl;
}

//84
const snowyOwl = createOwl('Snowy Owl', 'white');

//85
console.log(`A ${snowyOwl.color} ${snowyOwl.species} swoops from the sky.`);

//86
let numOfRabbits = 0;

//87
while (numOfRabbits < 5) {
  numOfRabbits++;
  console.log('A rabbit hops through the grass.');
}

//88
const clouds2 = ['puffy', 'fluffy', 'white'];

//89
console.log('High above, the clouds form shapes:');

//90
for (let i = 0; i < clouds2.length; i++) {
  console.log(`${i+1}. ${clouds2[i]}`);
}

//91
function createBear(species, size, color) {
   const bear = {
    species,
    size,
    color
   };
   return bear;
}

//92
const brownBear = createBear('Black Bear', 'large', 'brown');

//93
console.log(`A ${brownBear.color} ${brownBear.species}, ${brownBear.size} in size, emerges from the woods.`);

//94
const animals3 = [];

//95
function addAnimal3(animal) {
  animals3.push(animal);
}

//96
addAnimal3(createAnimal('Frankie', 'falcon', 'grey'));
addAnimal3(createAnimal('Feebs', 'ferret', 'brown'));
addAnimal3(createAnimal('Mia', 'mouse', 'white'));

//97
console.log('Other animals scurry around you:');

//98
for (const animal of animals3) {
  console.log(`${animal.name}, the ${animal.color} ${animal.type}.`);
}

//99
console.log('Nature is calling.');

//100
console.log('Answer its call and explore the beauty it has to offer.');