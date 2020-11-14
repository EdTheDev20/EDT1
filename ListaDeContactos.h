// Definição do tipo
typedef struct DadosContacto Contacto;
typedef struct ListaContactos ListaTel;

// Cabeçalho das funcões

ListaTel* InicializaLista();

bool ListaVazia(ListaTel* ptr);

ListaTel* InserirContacto(ListaTel*ptr, contacto a);

ListaTel* RetirarContacto(ListaTel*ptr, int B);

Contacto* SubstituirContacto(ListaTel*ptr);

Contacto* AtualizarComBaseNoNome(ListaTel*ptr,char C);

int retornacontacto(ListaTel*ptr,emp[]);
