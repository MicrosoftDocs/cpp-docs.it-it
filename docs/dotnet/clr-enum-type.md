---
title: Tipo Enum di CLR | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- scope, of CLR enum
- enum struct keyword [C++]
- enum class keyword [C++]
ms.assetid: 4541d952-97bb-4e35-a7f8-d14f5f6a6606
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2416a306373db08c5e925b4987fc8a9273973c39
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111497"
---
# <a name="clr-enum-type"></a>Tipo enum di CLR
La dichiarazione e il comportamento delle enumerazioni è cambiato da estensioni gestite per C++ a Visual C++.  
  
 La dichiarazione di enumerazione di estensioni gestite è preceduta dal `__value` (parola chiave). L'idea è per distinguere l'enumerazione nativa dall'enumerazione CLR derivata da `System::ValueType`, durante la funzionalità analoghe. Ad esempio:  
  
```  
__value enum e1 { fail, pass };  
public __value enum e2 : unsigned short  {   
   not_ok = 1024,   
   maybe, ok = 2048   
};  
```  
  
 La nuova sintassi risolve il problema della distinzione nativo e le enumerazioni CLR a sottolineando la natura della classe di quest'ultimo invece radici del relativo tipo di valore. Di conseguenza, il `__value` (parola chiave) vengono rimossi e sostituiti con la coppia parola chiave con spaziatura di `enum class`. In questo modo una simmetria coppie parola chiave per le dichiarazioni di classi di interfaccia, valore e riferimento:  
  
```  
enum class ec;  
value class vc;  
ref class rc;  
interface class ic;  
```  
  
 La traduzione della coppia di enumerazione `e1` e `e2` nella nuova sintassi è simile al seguente:  
  
```  
enum class e1 { fail, pass };  
public enum class e2 : unsigned short {   
   not_ok = 1024,  
   maybe, ok = 2048   
};  
```  
  
 Oltre a questa piccola modifica sintattica, il comportamento del tipo enum CLR ha subito in diversi modi:  
  
-   Una dichiarazione con prototipo di un'enumerazione CLR non è più supportata. Non è disponibile alcun mapping. E viene semplicemente contrassegnato come errore in fase di compilazione.  
  
```  
__value enum status; // Managed Extensions: ok  
enum class status;   // new syntax: error  
```  
  
-   Risoluzione dell'overload tra i tipi aritmetici incorporati e `Object` gerarchia di classi è invertito tra le due versioni del linguaggio. Come effetto collaterale, enumerazioni CLR non è più in modo implicito vengono convertite in tipi aritmetici.  
  
-   Nella nuova sintassi, un enum di CLR mantiene il proprio ambito, che non è il caso nelle estensioni gestite. In precedenza, gli enumeratori erano visibili all'interno dell'ambito contenitore dell'enumerazione. A questo punto, gli enumeratori sono incapsulati all'interno dell'ambito dell'enumerazione.  
  
## <a name="clr-enums-are-a-kind-of-object"></a>Enumerazioni CLR sono un tipo di oggetto  
 Si consideri il frammento di codice riportato di seguito.  
  
```  
__value enum status { fail, pass };  
  
void f( Object* ){ Console::WriteLine("f(Object)\n"); }  
void f( int ){ Console::WriteLine("f(int)\n"); }  
  
int main()  
{  
   status rslt = fail;  
  
   f( rslt ); // which f is invoked?  
}  
```  
  
 Per il programmatore in C++ nativo, naturale rispondere alla domanda dell'istanza di overload `f()` viene richiamato è quello di `f(int)`. Un'enumerazione è una costante integrale simbolica e partecipa alle promozioni integrali standard che hanno la precedenza in questo caso.  E in realtà nelle estensioni gestite questo è l'istanza a cui la chiamata viene risolta. La causa di un numero di errori, non in caso di utilizzo in C++ nativo, ma se è necessaria per interagire con il framework BCL (Base Class Library) esistente, in cui un `Enum` è una classe derivata indirettamente da `Object`. Nella finestra di progettazione del linguaggio Visual C++, l'istanza di `f()` richiamato è quello di `f(Object^)`.  
  
 Il modo che Visual C++ ha scelto di applicare questo comportamento è non supportano le conversioni implicite tra un tipo enum di CLR e i tipi aritmetici. Ciò significa che qualsiasi assegnazione di un oggetto di un tipo enum di CLR a un tipo aritmetico richiede un cast esplicito. In tal caso, si consideri ad esempio  
  
```  
void f( int );  
```  
  
 come nelle estensioni gestite, la chiamata di un metodo non in overload  
  
```  
f( rslt ); // ok: Managed Extensions; error: new syntax  
```  
  
 è ok e il valore contenuto in `rslt` viene implicitamente convertito in un valore integer. In Visual C++, questa chiamata non riesce a compilare. Per convertire correttamente, è necessario inserire un operatore di conversione:  
  
```  
f( safe_cast<int>( rslt )); // ok: new syntax  
```  
  
## <a name="the-scope-of-the-clr-enum-type"></a>L'ambito del tipo Enum CLR  
 Una delle modifiche tra i linguaggi C e C++ è stata aggiunta in C++ dell'ambito all'interno della struttura. In C, uno struct è solo un'aggregazione di dati senza il supporto di un'interfaccia o un ambito associato. Questo stato radicale modifica al momento e si è verificato un problema di oggetto di controversia per molti nuovi utenti di C++ provenienti dal linguaggio C. La relazione tra le enumerazioni native e CLR è analoga.  
  
 Nelle estensioni gestite, è stato effettuato un tentativo di definire nomi inseriti debolmente per gli enumeratori di un'enumerazione CLR per simulare l'assenza di ambito all'interno dell'enumerazione nativa. Non è stato ottenuto esito positivo. Il problema è che in questo modo gli enumeratori confluiscono nello spazio dei nomi globale, pertanto difficile da gestire i conflitti di nomi. Nella nuova sintassi, è stato conforme ad altri linguaggi CLR in ambiti all'interno dell'enumerazione CLR di supporto.  
  
 Ciò significa che qualsiasi utilizzo non qualificato dell'enumeratore di un'enumerazione CLR non verrà riconosciuto nella nuova sintassi. Esaminiamo un esempio reale.  
  
```  
// Managed Extensions supporting weak injection  
__gc class XDCMake {  
public:  
   __value enum _recognizerEnum {   
      UNDEFINED,  
      OPTION_USAGE,   
      XDC0001_ERR_PATH_DOES_NOT_EXIST = 1,  
      XDC0002_ERR_CANNOT_WRITE_TO = 2,  
      XDC0003_ERR_INCLUDE_TAGS_NOT_SUPPORTED = 3,  
      XDC0004_WRN_XML_LOAD_FAILURE = 4,  
      XDC0006_WRN_NONEXISTENT_FILES = 6,  
   };  
  
   ListDictionary* optionList;  
   ListDictionary* itagList;  
  
   XDCMake() {  
      optionList = new ListDictionary;  
  
      // here are the problems...  
      optionList->Add(S"?", __box(OPTION_USAGE)); // (1)  
      optionList->Add(S"help", __box(OPTION_USAGE)); // (2)  
  
      itagList = new ListDictionary;  
      itagList->Add(S"returns",   
         __box(XDC0004_WRN_XML_LOAD_FAILURE)); // (3)  
   }  
};  
```  
  
 Ognuno dei tre non qualificato usi dei nomi di enumeratore (`(1)`, `(2)`, e `(3)`) sarà necessario qualificare la traduzione per la nuova sintassi affinché il codice sorgente da compilare. Di seguito è illustrata la conversione corretta del codice sorgente originale:  
  
```  
ref class XDCMake {  
public:  
   enum class _recognizerEnum {  
      UNDEFINED, OPTION_USAGE,   
      XDC0001_ERR_PATH_DOES_NOT_EXIST = 1,  
      XDC0002_ERR_CANNOT_WRITE_TO = 2,  
      XDC0003_ERR_INCLUDE_TAGS_NOT_SUPPORTED = 3,  
      XDC0004_WRN_XML_LOAD_FAILURE = 4,  
      XDC0006_WRN_NONEXISTENT_FILES = 6  
   };  
  
   ListDictionary^ optionList;  
   ListDictionary^ itagList;  
  
   XDCMake() {  
      optionList = gcnew ListDictionary;  
      optionList->Add("?",_recognizerEnum::OPTION_USAGE); // (1)  
      optionList->Add("help",_recognizerEnum::OPTION_USAGE); //(2)  
      itagList = gcnew ListDictionary;  
      itagList->Add( "returns",   
         _recognizerEnum::XDC0004_WRN_XML_LOAD_FAILURE); //(3)  
   }  
};  
```  
  
 In questo caso la strategia di progettazione tra nativo e un'enumerazione CLR. Enum di CLR mantiene un ambito associato in Visual C++, è necessario né efficace incapsulare la dichiarazione di enum all'interno di una classe. Questo linguaggio si è passati alla stessa ora di cfront 2.0 Bell Laboratories anche per risolvere il problema dell'inquinamento nome globale.  
  
 Nella versione beta originale della nuova libreria iostream Jerry Schwarz Bell Laboratories, non erano state incapsulate tutte le enumerazioni associate definite per la libreria e gli enumeratori comuni, ad esempio `read`, `write`, `append`e così via , impedivano agli utenti di compilare il codice esistente. Sarebbe stato un'unica soluzione consiste nel modificare i nomi, ad esempio `io_read`, `io_write`e così via. Per modificare la lingua aggiungendo l'ambito a un'enumerazione sarebbe stata una seconda soluzione, ma non è stato possibile al momento. La soluzione intermedia è a incapsulare l'enumerazione all'interno della classe o della classe di gerarchia, in cui il nome di tag e gli enumeratori dell'enumerazione popolano l'ambito della classe contenitore). Vale a dire, incluse la motivazione per l'inserimento delle enumerazioni all'interno di classi, inizialmente non è stato concettuali, ma una risposta pratica al problema inquinamento dello spazio dei nomi globale.  
  
 Con l'enumerazione di Visual C++, non è più offre alcun vantaggio per incapsulare un'enumerazione all'interno di una classe. Infatti, se si esamina il `System` spazi dei nomi, si noterà che enumerazioni, classi e interfacce appartengono tutte allo stesso spazio di dichiarazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di valore e i relativi comportamenti (C + c++ /CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [classe di enumerazione](../windows/enum-class-cpp-component-extensions.md)