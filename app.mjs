import http from 'node:http'

const server = http.createServer((req,res)=>{
    res.write("Hello World!");
    res.end();
});

server.listen(3000);