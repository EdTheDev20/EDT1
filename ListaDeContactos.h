// Definição do tipo
typedef struct DadosContacto contacto;
typedef struct ListaContactos ListaTel;

// Cabeçalho das funcões

ListaTel* InicializaLista();

bool ListaVazia(ListaTel* ptr);

ListaTel* InserirContacto(ListaTel* ptr, contacto a);

ListaTel* RetirarContacto(ListaTel* ptr, int B);

contacto* SubstituirContacto(ListaTel* ptr);

contacto* AtualizarComBaseNoNome(ListaTel* ptr,char C);

int retornacontacto(ListaTel* ptr, char emp);
