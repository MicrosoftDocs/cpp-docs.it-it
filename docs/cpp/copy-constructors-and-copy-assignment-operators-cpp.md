---
title: Costruttori di copia e operatori di assegnazione di copia (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- = operator [C++], copying objects
- assignment statements [C++], copying objects
- assignment operators [C++], for copying objects
- objects [C++], copying
- initializing objects, by copying objects
- copying objects
- assigning values to copy objects
ms.assetid: a94fe1f9-0289-4fb9-8633-77c654002c0d
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1f2ebf51f28912c3cb798acc1ff4aa377c1bebb5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="copy-constructors-and-copy-assignment-operators-c"></a>Costruttori di copia e operatori di assegnazione di copia (C++)
> [!NOTE]
>  A partire da C++ 11, sono supportati due tipi di assegnazione nella lingua: *copiare assegnazione* e *assegnazione di spostamento*. In questo articolo per "assegnazione" si intente assegnazione di copia, se non indicato diversamente in modo esplicito. Per informazioni sull'assegnazione di spostamento, vedere [costruttori di spostamento e operatori di assegnazione di spostamento (C++)](http://msdn.microsoft.com/en-us/1442de5f-37a5-42a1-83a6-ec9cfe0414db).  
>   
>  Le operazioni di assegnazione e di inizializzazione comportano entrambe la copia degli oggetti.  
  
-   **Assegnazione**: quando il valore dell'oggetto viene assegnato a un altro oggetto, il primo oggetto viene copiato nel secondo oggetto. Quindi,  
  
    ```cpp  
    Point a, b;  
    ...  
    a = b;  
    ```  
  
     comporta che il valore di `b` venga copiato in `a`.  
  
-   **Inizializzazione**: l'inizializzazione si verifica quando viene dichiarato un nuovo oggetto, quando gli argomenti vengono passati alle funzioni per valore, o quando i valori vengono restituiti dalle funzioni per valore.  
  
 È possibile definire la semantica di "copia" per gli oggetti di tipo classe. Si consideri, ad esempio, il seguente codice:  
  
```cpp  
TextFile a, b;  
a.Open( "FILE1.DAT" );  
b.Open( "FILE2.DAT" );  
b = a;  
```  
  
 Il codice precedente potrebbe significare "copia il contenuto di FILE1.DAT in FILE2.DAT" o "ignora FILE2.DAT e imposta `b` come secondo handle per FILE1.DAT". È necessario associare la semantica di copia appropriata a ciascuna classe, come illustrato di seguito.  
  
-   Utilizzando l'operatore di assegnazione `operator=` facendo riferimento al tipo di classe, come tipo restituito, e al parametro passato da `const`, ad esempio `ClassName& operator=(const ClassName& x);`.  
  
-   Utilizzando il costruttore di copia.   
  
 Se non si dichiara alcun costruttore di copia, il compilatore genererà automaticamente un costruttore di copia membro per membro.  Se non si dichiara alcun operatore di assegnazione di copia, il compilatore genererà automaticamente un operatore di assegnazione di copia membro per membro. Dichiarando un costruttore di copia, non si elimina l'operatore di assegnazione di copia generato dal compilatore, e viceversa. Se si implementa uno dei due, è consigliabile implementare anche l'altro, in modo che il significato del codice sia chiaro.  
   
 Il costruttore di copia accetta un argomento di tipo *del nome della classe***&**, dove *del nome della classe* è il nome della classe per cui è definito il costruttore. Ad esempio:  
  
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
>  Rendere il tipo di argomento del costruttore di copia *const-nome della classe*  **&**  laddove possibile. Ciò impedisce al costruttore di copia di modificare accidentalmente l'oggetto da cui viene copiato. Consente inoltre la copia da **const** oggetti.  
  
## <a name="compiler-generated-copy-constructors"></a>Costruttori di copia generati dal compilatore  
 Costruttori di copia generato dal compilatore, ad esempio i costruttori di copia definito dall'utente, dispongono di un singolo argomento di tipo "riferimento a *del nome della classe*." Un'eccezione è quando tutte le classi base e le classi di membro hanno costruttori di copia dichiarati come accettando un singolo argomento di tipo **const** *del nome della classe***&**. In tal caso, è anche argomento del costruttore di copia generato dal compilatore **const**.  
  
 Quando il tipo di argomento del costruttore di copia non è **const**, l'inizializzazione copiando un **const** oggetto genera un errore. Non è vero il contrario: se l'argomento è **const**, è possibile inizializzare copiando un oggetto che non è **const**.  
  
 Operatori di assegnazione generato dal compilatore seguono lo stesso modello in relazione alla **const.** Accettano un unico argomento di tipo *del nome della classe*  **&**  , a meno che gli operatori di assegnazione in tutte le classi di base e di membro accettino argomenti di tipo **const** *del nome della classe &.* In questo caso, la classe generato assegnazione operatore accetta un **const** argomento.  
  
> [!NOTE]
>  Quando le classi base virtuali vengono inizializzate dai costruttori di copia, generate dal compilatore o definite dall'utente, vengono inizializzate una sola volta: nel punto in cui vengono costruite.  
  
 La implicazioni sono simili a quelle del costruttore di copia. Quando il tipo di argomento non è **const**, assegnazione da un **const** oggetto genera un errore. Non è vero il contrario: se un **const** valore viene assegnato a un valore che non è **const**, l'assegnazione ha esito positivo.  
  
 Per ulteriori informazioni sugli operatori di assegnazione di overload, vedere [assegnazione](../cpp/assignment.md).  
  
