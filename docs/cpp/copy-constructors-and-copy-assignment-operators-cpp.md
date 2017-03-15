---
title: "Costruttori di copia e operatori di assegnazione di copia (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "= (operatore), copia di oggetti"
  - "assegnazioni di valori per la copia di oggetti"
  - "operatori di assegnazione, copia di oggetti"
  - "istruzioni di assegnazione, copia di oggetti"
  - "copia di oggetti"
  - "inizializzazione di oggetti, copia di oggetti"
  - "oggetti [C++], copia"
ms.assetid: a94fe1f9-0289-4fb9-8633-77c654002c0d
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttori di copia e operatori di assegnazione di copia (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  A partire da C\+\+11, nel linguaggio sono supportati due tipi di assegnazione: *assegnazione di copia* e *assegnazione di spostamento*.  In questo articolo per "assegnazione" si intente assegnazione di copia, se non indicato diversamente in modo esplicito.  Per informazioni sull'assegnazione di spostamento, vedere [Costruttori di spostamento e operatori di assegnazione di spostamento \(C\+\+\)](http://msdn.microsoft.com/it-it/1442de5f-37a5-42a1-83a6-ec9cfe0414db).  
>   
>  Le operazioni di assegnazione e di inizializzazione comportano entrambe la copia degli oggetti.  
  
-   **Assegnazione**: Quando il valore di un oggetto viene assegnato a un altro oggetto, il primo oggetto viene copiato nel secondo oggetto.  Quindi,  
  
    ```cpp  
    Point a, b;  
    ...  
    a = b;  
    ```  
  
     comporta che il valore di `b` venga copiato in `a`.  
  
-   **Inizializzazione**: l'inizializzazione si verifica quando viene dichiarato un nuovo oggetto, quando gli argomenti vengono passati alle funzioni per valore o quando i valori vengono restituiti dalle funzioni per valore.  
  
 È possibile definire la semantica di "copia" per gli oggetti di tipo classe.  Si consideri, ad esempio, il seguente codice:  
  
```cpp  
TextFile a, b;  
a.Open( "FILE1.DAT" );  
b.Open( "FILE2.DAT" );  
b = a;  
```  
  
 Il codice precedente potrebbe significare "copia il contenuto di FILE1.DAT in FILE2.DAT" o "ignora FILE2.DAT e imposta `b` come secondo handle per FILE1.DAT". È necessario associare la semantica di copia appropriata a ciascuna classe, come illustrato di seguito.  
  
-   Usando l'operatore di assegnazione `operator=` facendo riferimento al tipo di classe, come tipo restituito, e al parametro passato da `const`, ad esempio `ClassName& operator=(const ClassName& x);`.  
  
-   Usando il costruttore di copia.  Per altre informazioni sui costruttori di copia, vedere [Regole per la dichiarazione di costruttori](../misc/rules-for-declaring-constructors.md).  
  
 Se non si dichiara alcun costruttore di copia, il compilatore genererà automaticamente un costruttore di copia membro per membro.  Se non si dichiara alcun operatore di assegnazione di copia, il compilatore genererà automaticamente un operatore di assegnazione di copia membro per membro. Dichiarando un costruttore di copia, non si elimina l'operatore di assegnazione di copia generato dal compilatore, e viceversa.  Se si implementa uno dei due, è consigliabile implementare anche l'altro, in modo che il significato del codice sia chiaro.  
  
 Per informazioni dettagliate sull'assegnazione membro per membro, vedere [\(NOTINBUILD\) Memberwise Assignment and Initialization](http://msdn.microsoft.com/it-it/94048213-8b49-4416-8069-b1b7a6f271f9).  
  
 Il costruttore di copia accetta un argomento di tipo *class\-name***&**, dove *class\-name* è il nome della classe per cui il costruttore viene definito.  Ad esempio:  
  
```cpp  
// spec1_copying_class_objects.cpp  
class Window  
{  
public:  
    Window( const Window& ); // Declare copy constructor.  
    // ...  
};  
  
int main()  
{  
}  
```  
  
> [!NOTE]
>  È bene scegliere il tipo dell'argomento *const class\-name***&** del costruttore di copia appena possibile.  Ciò impedisce al costruttore di copia di modificare accidentalmente l'oggetto da cui viene copiato.  In questo modo, inoltre, viene abilitata la copia da oggetti **const**.  
  
## Costruttori di copia generati dal compilatore  
 I costruttori di copia generati dal compilatore, ad esempio i costruttori di copia definiti dall'utente, dispongono di un singolo argomento di tipo "riferimento a *class\-name*". Un'eccezione si verifica nel caso in cui tutte le classi base e le classi di membro dispongano di costruttori di copia dichiarati come costruttori che accettano un solo argomento di tipo **const** *class\-name***&**.  In tal caso, l'argomento del costruttore di copia generato dal compilatore è anch'esso **const**.  
  
 Quando il tipo di argomento del costruttore di copia non è **const**, l'inizializzazione mediante la copia di un oggetto **const** genera un errore.  Il contrario non è vero: se l'argomento è **const**, è possibile eseguire l'inizializzazione copiando un oggetto che non sia **const**.  
  
 Gli operatori di assegnazione generati dal compilatore seguono lo stesso modello per quanto riguarda **const.** Tali operatori accettano un solo argomento di tipo *class\-name***&**, a meno che gli operatori di assegnazione in tutte le classi base e di membro accettino argomenti di tipo **const** *class\-name&*. In questo caso, l'operatore di assegnazione generato dalla classe accetta un argomento **const**.  
  
> [!NOTE]
>  Quando le classi base virtuali vengono inizializzate dai costruttori di copia, generate dal compilatore o definite dall'utente, vengono inizializzate una sola volta: nel punto in cui vengono costruite.  
  
 La implicazioni sono simili a quelle del costruttore di copia.  Quando il tipo di argomento non è **const**, l'assegnazione da un oggetto **const** genera un errore.  Il contrario non è vero: se viene assegnato un valore **const** a un valore che non è **const**, l'assegnazione viene completata.  
  
 Per altre informazioni sugli operatori di assegnazione di overload, vedere [Assegnazione](../cpp/assignment.md).  
  
## Vedere anche  
 [Funzioni membro speciali](../misc/special-member-functions-cpp.md)