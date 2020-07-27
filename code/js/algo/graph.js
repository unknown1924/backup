const airports = 'phx bkk okc jfk lax mex eze hel los lap lim'.split(' ');

const routes = [
    ['phx', 'lax'],
    ['phx', 'jfk'],
    ['jfk', 'okc'],
    ['jfk', 'hel'],
    ['jfk', 'los'],
    ['mex', 'lax'],
    ['mex', 'bkk'],
    ['mex', 'lim'],
    ['mex', 'eze'],
    ['lim', 'bkk'],
];
const adjacencyList = new Map();

function addNode(airport) {
    adjacencyList.set(airport, []);
}

function addEdge(origin, destination) {
    adjacencyList.get(origin).push(destination);
    adjacencyList.get(destination).push(origin);
}

function bfs(start) {
    const queue = []
}

airports.forEach(airport => addNode(airport));
routes.forEach(route => addEdge(...route));

console.log(adjacencyList);
