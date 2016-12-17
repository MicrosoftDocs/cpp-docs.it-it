---
title: "Sistema di tipi C++ (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 553c0ed6-77c4-43e9-87b1-c903eec53e80
caps.latest.revision: 24
caps.handback.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sistema di tipi C++ (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il concetto di *tipo* è molto importante in C\+\+.  Per poter essere compilati è necessario che a ogni variabile, argomento di funzione e valore restituito di una funzione siano associati tipi.  A ogni espressione \(compresi i valori letterali\) viene inoltre assegnato un tipo in modo implicito prima della restituzione di un risultato.  Alcuni esempi di tipi includono `int` per archiviare i valori integrali, `double` per archiviare i valori a virgola mobile \(anche noti come tipi di dati *scalari*\) o la classe della libreria standard [std::basic\_string](../standard-library/basic-string-class.md) per archiviare testo.  È possibile creare un tipo personalizzato definendo una `class` o uno `struct`.  Il tipo specifica la quantità di memoria che verrà allocata per la variabile \(o risultato dell'espressione\), i tipi di valori che è possibile archiviare in tale variabile, la modalità di interpretazione di questi valori \(come schemi di bit\) e le operazioni che è possibile eseguire su di essi.  In questo articolo viene offerta una panoramica informale delle principali funzionalità del sistema di tipi C\+\+.  
  
## Terminologia  
 **Variabile**: nome simbolico di una quantità di dati. Questo nome può essere utilizzato per accedere ai dati a cui si riferisce nell'ambito del codice in cui è definito.  In C\+\+, il termine "variabile" viene in genere utilizzato per fare riferimento a istanze di tipi di dati scalari, mentre le istanze di altri tipi sono in genere definite "oggetti".  
  
 **Oggetto**: per semplicità e coerenza, in questo articolo il termine "oggetto" viene utilizzato per fare riferimento a qualsiasi istanza di una classe o di una struttura e quando viene utilizzato in senso generale include tutti i tipi, anche le variabili scalari.  
  
 **Tipo POD** \(dati non aggiornati\): questa categoria informale di tipi di dati in C\+\+ fa riferimento ai tipi che sono scalari \(vedere la sezione relativa ai tipi fondamentali\) o *classi POD*.  Una classe POD non contiene membri dati statici che non siano anche POD e non contiene costruttori, distruttori e operatori di assegnazione definiti dall'utente.  Una classe POD non include funzioni virtuali, né una classe base e né membri dati non statici privati o protetti.  I tipi POD vengono spesso utilizzati per lo scambio di dati esterni, ad esempio con un modulo scritto nel linguaggio C \(che presenta solo tipi POD\).  
  
## Specificare tipi di funzione e di variabile  
 C\+\+ è un linguaggio *fortemente tipizzato* e *tipizzato in modo statico*, pertanto ogni oggetto presenta un tipo che non cambia mai \(da non confondere con gli oggetti dati statici\).            
 **Quando si dichiara una variabile** nel codice, è necessario specificarne il tipo in modo esplicito oppure utilizzare la parola chiave `auto` per indicare al compilatore di dedurre il tipo dall'inizializzatore.            
 **Quando si dichiara una funzione** nel codice, è necessario specificare il tipo di ciascun argomento e il relativo valore restituito o `void` se la funzione non restituisce alcun valore.  Si verifica un'eccezione quando si utilizzano modelli di funzione che consentono l'utilizzo di argomenti di tipi arbitrari.  
  
 Dopo aver dichiarato una variabile, non è più possibile modificarne il tipo.  È tuttavia possibile copiare il valore della variabile o il valore restituito di una funzione in un'altra variabile di un tipo diverso.  Queste operazioni, note come *conversioni di tipo*, sono talvolta necessarie, ma possono anche diventare potenziali fonti di inesattezze o perdite di dati.  
  
 Quando si dichiara una variabile di tipo POD, è consigliabile inizializzarla, ovvero assegnare ad essa un valore iniziale.  Finché non viene inizializzata, una variabile presenta un valore consistente di qualsiasi bit che in precedenza si trovava in quella posizione di memoria.  Si tratta di un aspetto importante di C\+\+ da ricordare, specialmente se si è abituati a un altro linguaggio che gestisce l'inizializzazione in modo automatico.  Quando si dichiara una variabile di un tipo di classe non POD, il costruttore gestisce l'inizializzazione.  
  
 Nell'esempio seguente vengono illustrate alcune dichiarazioni di variabile semplici con alcune descrizioni per ognuna.  Nell'esempio viene inoltre illustrato il modo in cui il compilatore utilizza le informazioni sul tipo per consentire o meno operazioni successive sulla variabile.  
  
```  
  
int result = 0;              // Declare and initialize an integer.  
double coefficient = 10.8;   // Declare and initialize a floating   
                             // point value.  
auto name = "Lady G.";       // Declare a variable and let compiler   
                             // deduce the type.  
auto address;                // error. Compiler cannot deduce a type   
                             // without an intializing value.  
age = 12;                    // error. Variable declaration must  
                             // specify a type or use auto!  
result = "Kenny G.";         // error. Can’t assign text to an int.  
string result = "zero";      // error. Can’t redefine a variable with  
                             // new type.  
int maxValue;                // Not recommended! maxValue contains   
                             // garbage bits until it is initialized.  
  
```  
  
## Tipi fondamentali \(predefiniti\)  
 A differenza di alcuni linguaggi, C\+\+ non presenta alcun tipo di base universale da cui derivano tutti gli altri tipi.  L'implementazione [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] del linguaggio include molti *tipi fondamentali*, noti anche come *tipi predefiniti*.  Sono inclusi tipi numerici come `int`, `double`, `long`, `bool`, oltre i tipi `char` e `wchar_t`, rispettivamente per i caratteri ASCII e UNICODE.  La maggior parte dei tipi fondamentali, ad eccezione di `bool`, `double`, `wchar_t` e i tipi correlati, presentano tutti versioni senza segno che modificano l'intervallo di valori che la variabile può archiviare.  Ad esempio, `int`, che contiene un valore signed integer a 32 bit, può rappresentare un valore compreso tra \-2.147.483.648 e 2.147.483.647.  `unsigned int`, che viene archiviato anche a 32 bit, può archiviare un valore compreso tra 0 e 4.294.967.295.  Il numero totale di valori possibili è in ogni caso lo stesso, solo l'intervallo è diverso.  
  
 I tipi fondamentali sono riconosciuti dal compilatore che ha regole predefinite che stabiliscono quali operazioni è possibile eseguire su di essi e come possono essere convertiti in altri tipi fondamentali.  Per un elenco completo dei tipi predefiniti e dei relativi limiti numerici e di dimensione, vedere [Tipi fondamentali](../cpp/fundamental-types-cpp.md).  
  
 Di seguito vengono mostrate le dimensioni relative dei tipi predefiniti:  
  
 ![Dimensione in byte di tipi predefiniti](../cpp/media/built-intypesizes.png "Built\-inTYpeSizes")  
  
 Nella tabella seguente sono elencati i tipi fondamentali di uso più comune:  
  
|Tipo|Dimensione|Commento|  
|----------|----------------|--------------|  
|int|4 byte|Scelta predefinita per i valori integrali.|  
|double|8 byte|Scelta predefinita per i valori a virgola mobile.|  
|bool|1 byte|Rappresenta i valori che possono essere true o false.|  
|char|1 byte|Utilizzare i caratteri ASCII negli oggetti std::string o nelle stringhe di tipo C precedenti che non dovranno mai essere convertiti in UNICODE.|  
|wchar\_t|2 byte|Rappresenta valori a caratteri "wide" che è possibile codificare in formato Unicode \(UTF\-16 in Windows, per altri sistemi operativi potrebbe essere diverso\).  Si tratta del tipo di carattere utilizzato in stringhe di tipo `std::wstring`.|  
|unsigned char|1 byte|C\+\+ non include alcun tipo `byte` predefinito.  Utilizzare il tipo unsigned char per rappresentare un valore byte.|  
|unsigned int|4 byte|Scelta predefinita per i flag di bit.|  
|long long|8 byte|Rappresenta valori integer di grandi dimensioni.|  
  
## Tipo void  
 Il tipo `void` è un tipo speciale; non è possibile dichiarare una variabile di tipo `void`, ma è possibile dichiarare una variabile di tipo `void *` \(puntatore a `void`\), che talvolta risulta necessario quando si alloca memoria non elaborata \(senza tipi\).  Tuttavia, i puntatori a `void` sono indipendenti dai tipi e il relativo utilizzo è in genere fortemente sconsigliato nel linguaggio C\+\+ moderno.  In una dichiarazione di funzione, un valore restituito `void` indica che la funzione non restituisce un valore; si tratta di un uso comune e accettabile di `void`.  Mentre il linguaggio C richiede funzioni con zero parametri per dichiarare `void` nell'elenco di parametri, ad esempio `fou(void)`, questa pratica è fortemente sconsigliata nel linguaggio C\+\+ moderno, per cui si dovrebbe dichiarare `fou()`.  Per ulteriori informazioni, vedere [Conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md).  
  
## qualificatore di tipo const  
 Qualsiasi tipo predefinito o definito dall'utente può essere qualificato tramite la parola chiave const.  Le funzioni membro possono inoltre essere qualificate da `const`ed essere in overload con `const`.  Non è possibile modificare il valore di un tipo `const` dopo l'inizializzazione.  
  
```  
  
const double PI = 3.1415;  
PI = .75 //Error. Cannot modify const variable.  
  
```  
  
 Il qualificatore `const` viene spesso utilizzato nelle dichiarazioni di funzione e di variabile e la correttezza di const è un concetto importante nel linguaggio C\+\+. Si tratta fondamentalmente di utilizzare `const` per assicurare, in fase di compilazione, che i valori non vengano modificati accidentalmente.  Per ulteriori informazioni, vedere [const](../cpp/const-cpp.md).  
  
 Un tipo `const` è diverso dalla relativa versione non const, `const int`, ad esempio, è un tipo diverso da `int`.  È possibile utilizzare l'operatore `const_cast` C\+\+ in quei rari casi in cui è necessario rimuovere  *const\-ness* da una variabile.  Per ulteriori informazioni, vedere [Conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md).  
  
## Tipi di stringa  
 In teoria, il linguaggio C\+\+ non dispone di tipi "stringa" predefiniti. `char` e `wchar_t` archiviano caratteri singoli. È necessario dichiarare una matrice di questi tipi per avvicinarsi a una stringa, aggiungendo un valore Null finale \(ad esempio `‘\0’` in ASCII\) all'elemento della matrice dopo l'ultimo carattere valido \("stringa di tipo C"\).  Le stringhe di tipo C richiedono la scrittura di una quantità maggiore di codice o l'utilizzo delle funzioni della libreria dell'utilità di stringa esterna.  Il linguaggio C\+\+ moderno prevede tipi della libreria standard `std::string` \(per le stringhe di caratteri di tipo `char` a 8 bit\) o `std::wstring` \(per le stringhe di caratteri di tipo `wchar_t` a 16 bit\).  Questi contenitori STL possono essere considerati tipi di stringa nativi perché fanno parte delle librerie standard incluse in qualsiasi ambiente di compilazione conforme a C\+\+.  È sufficiente utilizzare la direttiva `#include <string>` per rendere questi tipi disponibili nel programma. \(Se si utilizza MFC o ATL, è disponibile anche la classe CString, anche se non fa parte dello standard C\+\+\). L'utilizzo di matrici di caratteri con terminazione Null \(le stringhe in stile C citate in precedenza\) è fortemente sconsigliato nel linguaggio C\+\+ moderno.  
  
## Tipi definiti dall'utente  
 Quando si definisce un oggetto `class`, `struct`, `union` o `enum`, quel costrutto viene utilizzato nel resto del codice come se si trattasse di un tipo fondamentale.  Ha una dimensione nota in memoria e alcune regole sull'utilizzo si applicano a esso per la verifica in fase di compilazione e, al runtime, per la durata del programma.  Di seguito sono elencate le differenze principali tra i tipi fondamentali predefiniti e i tipi definiti dall'utente:  
  
-   Il compilatore non ha una conoscenza predefinita di un tipo definito dall'utente.  Riceve informazioni sul tipo quando rileva la definizione durante il processo di compilazione.  
  
-   Specificare le operazioni che è possibile eseguire sul tipo e il modo in cui può essere convertito in altri tipi, definendo \(tramite overload\) gli operatori appropriati, come membri di classe o come funzioni non membro.  Per ulteriori informazioni, vedere [Overload \(C\+\+\)](../misc/overloading-cpp.md).  
  
-   Non è necessario che siano tipizzati in modo statico \(regola secondo la quale il tipo di un oggetto non cambia mai\).  Attraverso i meccanismi di *ereditarietà* e *polimorfismo* una variabile dichiarata come tipo di classe definito dall'utente, a cui viene fatto riferimento come istanza di un oggetto di una classe, potrebbe avere un tipo diverso in fase di esecuzione rispetto alla fase di compilazione.  Per ulteriori informazioni, vedere [Ereditarietà](../cpp/inheritance-cpp.md).  
  
## Tipi puntatore  
 Tornando alle versioni precedenti del linguaggio C, C\+\+ continua a consentire la dichiarazione di una variabile di un tipo di puntatore tramite il dichiaratore speciale `*` \(asterisco\).  Un tipo di puntatore archivia l'indirizzo della posizione in memoria in cui è archiviato il valore effettivo dei dati.  Nel linguaggio C\+\+ moderno, si parla di *puntatori non elaborati* accessibili nel codice mediante operatori speciali `*` \(asterisco\) o `->` \(trattino con il segno maggiore di\).  Questo metodo è denominato *dereferenziazione* e quella da utilizzare varia a seconda che si dereferenzi un puntatore a un valore scalare o un puntatore a un membro di un oggetto.  L'utilizzo dei tipi di puntatore ha rappresentato per molto tempo uno degli aspetti più ostici e confusi dello sviluppo di programmi in C e C\+\+.  In questa sezione vengono descritti alcuni fatti e alcune procedure che semplificano l'utilizzo dei puntatori non elaborati, tuttavia nel linguaggio C\+\+ moderno non è più richiesto \(né consigliato\) utilizzare i puntatori non elaborati per la proprietà dell'oggetto per via dell'evoluzione subita dal [puntatore intelligente](../cpp/smart-pointers-modern-cpp.md) \(illustrata più dettagliatamente alla fine di questa sezione\).  È ancora utile e sicuro utilizzare i puntatori non elaborati per l'osservazione degli oggetti, tuttavia se è necessario utilizzarli per la proprietà dell'oggetto, è necessario farlo con attenzione valutando attentamente come vengono creati e distrutti gli oggetti di proprietà.  
  
 La prima cosa da sapere è che dichiarare una variabile di puntatore non elaborato comporta l'allocazione della sola memoria necessaria per archiviare un indirizzo di posizione in memoria a cui farà riferimento il puntatore quando verrà dereferenziato.  L'allocazione della memoria per il valore dati stesso \(noto anche come *archivio di backup*\) non è ancora avvenuta.  In altre parole, dichiarando una variabile di puntatore non elaborato si crea una variabile di indirizzo di memoria, non una variabile dati effettivi.  Dereferenziare una variabile di puntatore senza verificare che contenga un indirizzo valido a un archivio di backup causa un comportamento non definito \(in genere un errore irreversibile\) nel programma.  Nell'esempio seguente viene illustrato questo tipo di errore:  
  
```  
  
int* pNumber;       // Declare a pointer-to-int variable.  
*pNumber = 10;      // error. Although this may compile, it is  
                    // a serious error. We are dereferencing an  
                    // uninitialized pointer variable with no  
                    // allocated memory to point to.  
  
```  
  
 Nell'esempio viene dereferenziato un tipo di puntatore senza avere allocato memoria per archiviare i dati di tipo integer effettivi o aver assegnato a esso un indirizzo di memoria valido.  Nel codice seguente vengono corretti questi errori:  
  
```  
  
    int number = 10;          // Declare and initialize a local integer  
                              // variable for data backing store.  
    int* pNumber = &number;   // Declare and initialize a local integer  
                              // pointer variable to a valid memory  
                              // address to that backing store.  
...  
    *pNumber = 41;            // Dereference and store a new value in   
                              // the memory pointed to by  
                              // pNumber, the integer variable called  
                              // “number”. Note “number” was changed, not  
                              // “pNumber”.  
  
```  
  
 Nell'esempio di codice corretto viene utilizzata la memoria dello stack locale per creare l'archivio di backup a cui punta `pNumber`.  Per semplicità viene utilizzato un tipo fondamentale.  In pratica, l'archivio di backup dei puntatori è molto spesso dato da tipi definiti dall'utente allocati in modo dinamico in un'area di memoria denominata *heap* \(o "archivio libero"\) utilizzando un'espressione di parola chiave `new` \(nella programmazione in stile C viene utilizzata la funzione della libreria di runtime C `malloc()`\).  Dopo essere state allocate, queste "variabili" vengono in genere definite come "oggetti", specialmente se sono basate su una definizione di classe.  La memoria allocata con `new` deve essere eliminata da un'istruzione `delete` corrispondente \(oppure, se è stata utilizzata la funzione `malloc()` per l'allocazione, dalla funzione di runtime C `free()`\).  
  
 Tuttavia, è facile dimenticare di eliminare un oggetto allocato in modo dinamico, specialmente in codice complesso, il che causerebbe un bug di risorse denominato *perdita di memoria*.  Per questo motivo, l'utilizzo dei puntatori non elaborati è fortemente sconsigliato nel linguaggio C\+\+ moderno.  È quasi sempre consigliabile eseguire il wrapping di un puntatore non elaborato in un [puntatore intelligente](../cpp/smart-pointers-modern-cpp.md), in modo che la memoria venga rilasciata automaticamente quando viene richiamato il relativo distruttore \(quando il codice esce dall'ambito del puntatore intelligente\). Utilizzando i puntatori intelligenti si elimina un'intera classe di bug nei programmi C\+\+.  Nell'esempio seguente si supponga che `MyClass` sia un tipo definito dall'utente avente un metodo pubblico `DoSomeWork();`  
  
```  
  
void someFunction() {  
    unique_ptr<MyClass> pMc(new MyClass);  
    pMc->DoSomeWork();  
}  
  // No memory leak. Out-of-scope automatically calls the destructor  
  // for the unique_ptr, freeing the resource.  
  
```  
  
 Per ulteriori informazioni sui puntatori intelligenti, vedere [Puntatori intelligenti](../cpp/smart-pointers-modern-cpp.md).  
  
 Per ulteriori informazioni sulle conversioni dei puntatori, vedere [Conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md).  
  
 Per ulteriori informazioni sui puntatori in generale, vedere [Puntatori](../cpp/pointers-cpp.md).  
  
## Tipi di dati Windows  
 Nella programmazione Win32 classica per C e C\+\+, la maggior parte delle funzioni utilizza typedef specifici di Windows e macro \#define \(definite in `windef.h`\) per specificare i tipi di parametri e i valori restituiti.  Questi "tipi di dati Windows" sono principalmente nomi speciali \(alias\) assegnati ai tipi predefiniti di C\/C\+\+.  Per un elenco completo dei typedef e delle definizioni del preprocessore, vedere [Windows Data Types](http://msdn.microsoft.com/it-it/4553cafc-450e-4493-a4d4-cb6e2f274d46).  Alcuni di questi typedef, ad esempio HRESULT e LCID, sono utili e descrittivi.  Altri, come INT, non hanno un significato speciale e sono solo alias dei tipi C\+\+ fondamentali.  Altri tipi di dati Windows presentano nomi derivanti dalla programmazione C e dai processori a 16 bit e non hanno alcuno scopo o significato con l'hardware e i sistemi operativi moderni.  Esistono inoltre tipi di dati speciali associati alla libreria di Windows Runtime, elencati come [Windows Runtime base data types](http://msdn.microsoft.com/it-it/b5735851-ec07-48c1-92b4-ca9f768096f6).  Nel linguaggio C\+\+ moderno, la linea guida generale è quella di preferire i tipi C\+\+ fondamentali, a meno che il tipo Windows non trasmetta un significato aggiuntivo sull'interpretazione del valore.  
  
## Ulteriori informazioni  
 Per ulteriori informazioni sul sistema di tipi di C\+\+, vedere gli argomenti seguenti:  
  
|||  
|-|-|  
|[Tipi valore](../cpp/value-types-modern-cpp.md)|Vengono descritti i *tipi di valore* con i problemi relativi all'utilizzo.|  
|[Conversioni di tipi e indipendenza dai tipi](../cpp/type-conversions-and-type-safety-modern-cpp.md)|Vengono descritti i problemi di conversione dei tipi comuni e i modi per evitarli.|  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)