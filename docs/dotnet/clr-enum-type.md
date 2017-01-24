---
title: "Tipo enum di CLR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classe di enumerazione (parola chiave) [C++]"
  - "struct di enumerazione (parola chiave) [C++]"
  - "ambito, di enumerazione CLR"
ms.assetid: 4541d952-97bb-4e35-a7f8-d14f5f6a6606
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipo enum di CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La dichiarazione e il comportamento delle enum sono stati modificati in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nelle estensioni gestite, la dichiarazione dell'enumerazione è preceduta dalla parola chiave `__value`.  In questo contesto, l'obiettivo è distinguere l'enumerazione nativa dall'enumerazione CLR derivata da `System::ValueType`, nonostante funzionalità analoghe.  Di seguito è riportato un esempio.  
  
```  
__value enum e1 { fail, pass };  
public __value enum e2 : unsigned short  {   
   not_ok = 1024,   
   maybe, ok = 2048   
};  
```  
  
 La nuova sintassi risolve il problema della distinzione tra enumerazioni native e CLR sottolineando la natura di classi delle enumerazioni CLR anziché le radici del tipo di valore.  La parola chiave `__value` viene pertanto eliminata e sostituita dalla coppia di parole chiave con spazio `enum class`.  Viene così fornita una simmetria di parole chiave abbinate rispetto alle dichiarazioni delle classi di riferimento, di interfaccia e di valori:  
  
```  
enum class ec;  
value class vc;  
ref class rc;  
interface class ic;  
```  
  
 La conversione della coppia di enumerazioni `e1` ed `e2` nella nuova sintassi risulta simile alla seguente:  
  
```  
enum class e1 { fail, pass };  
public enum class e2 : unsigned short {   
   not_ok = 1024,  
   maybe, ok = 2048   
};  
```  
  
 Oltre a questa piccola modifica sintattica, il comportamento del tipo di enumerazione CLR ha subito diverse modifiche:  
  
-   La dichiarazione con prototipo di un enum di CLR non è più supportata.  Non viene eseguito alcun mapping  e viene semplicemente contrassegnato un errore in fase di compilazione.  
  
```  
__value enum status; // Managed Extensions: ok  
enum class status;   // new syntax: error  
```  
  
-   Tra le due versioni del linguaggio è stata invertita la risoluzione dell'overload tra i tipi aritmetici incorporati e la gerarchia di classi `Object`.  Di conseguenza, gli enum di CLR non vengono più implicitamente convertiti in tipi aritmetici.  
  
-   Contrariamente a quanto accade nelle estensioni gestite, nella nuova sintassi un enum di CLR mantiene il proprio ambito.  In passato, gli enumeratori erano visibili all'interno dell'ambito che contiene l'enum,  mentre adesso vi sono incapsulati.  
  
## Enumerazioni CLR come tipo di oggetto  
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
  
 Per un programmatore in C\+\+ nativo, l'istanza di `f()` in overload richiamata è l'istanza `f(int)`.  Un'enumerazione è una costante integrale simbolica e partecipa alle promozioni integrali standard che in questo caso hanno la precedenza.  Nelle estensioni gestite rappresenta infatti l'istanza in cui viene risolta la chiamata.  Ciò può causare risultati imprevisti, non in caso di utilizzo in C\+\+ nativo, bensì se è necessaria l'interazione con il framework BCL \(Base Class Library\) esistente in cui `Enum` è una classe indirettamente derivata da `Object`.  Nella progettazione in linguaggio [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], l'istanza di `f()` richiamata è l'istanza `f(Object^)`.  
  
 La modalità di applicazione in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] non prevede il supporto di conversioni implicite tra un tipo di enum CLR e i tipi aritmetici.  Per qualsiasi assegnazione di un oggetto di un tipo Enum CLR a un tipo aritmetico è pertanto necessario un cast esplicito.  Se ad esempio viene utilizzato  
  
```  
void f( int );  
```  
  
 come metodo non di overload nelle estensioni gestite, la chiamata  
  
```  
f( rslt ); // ok: Managed Extensions; error: new syntax  
```  
  
 è corretta e il valore contenuto in `rslt` viene convertito in modo implicito in un valore integer.  In [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], la compilazione di questa chiamata ha esito negativo.  Per una conversione corretta, è necessario inserire un operatore di conversione:  
  
```  
f( safe_cast<int>( rslt )); // ok: new syntax  
```  
  
## Ambito del tipo Enum CLR  
 Una delle modifiche tra i linguaggi C e C\+\+ è rappresentata dall'aggiunta in C\+\+ dell'ambito all'interno della struttura.  In C, una struttura è semplicemente un'aggregazione di dati senza supporto di un'interfaccia o di un ambito associato.  Al momento dell'introduzione, questa radicale modifica ha rappresentato un problema per numerosi nuovi utenti di C\+\+ che avevano precedentemente utilizzato il linguaggio C.  La relazione tra le enumerazioni native e CLR è analoga.  
  
 Nelle estensioni gestite, è stato compiuto il tentativo di definire nomi inseriti debolmente per gli enumeratori di un'enumerazione CLR allo scopo di simulare l'assenza di ambito all'interno dell'enumerazione nativa.  Non è stato ottenuto esito positivo,  poiché gli enumeratori confluiscono nello spazio dei nomi globale causando collisioni di nomi difficili da gestire.  Nella nuova sintassi è stata introdotto il supporto degli ambiti all'interno delle enumerazioni CLR in conformità con gli altri linguaggi CLR.  
  
 Di conseguenza, qualsiasi utilizzo non qualificato di un enumeratore di un'enumerazione CLR non verrà riconosciuto nella nuova sintassi.  Di seguito viene fornito un esempio reale.  
  
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
  
      // here are the problems …  
      optionList->Add(S"?", __box(OPTION_USAGE)); // (1)  
      optionList->Add(S"help", __box(OPTION_USAGE)); // (2)  
  
      itagList = new ListDictionary;  
      itagList->Add(S"returns",   
         __box(XDC0004_WRN_XML_LOAD_FAILURE)); // (3)  
   }  
};  
```  
  
 Ai fini della compilazione del codice sorgente, nella conversione nella nuova sintassi è necessario che ciascuno dei tre usi non qualificati dei nomi di enumeratore \(`(1)`, `(2)` e `(3)`\) venga qualificato.  Di seguito viene illustrata la conversione corretta del codice sorgente originale:  
  
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
  
 La strategia di progettazione risulta così modificata tra un'enumerazione nativa e un'enumerazione CLR.  Poiché un'enum CLR mantiene un ambito associato in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], non è necessario né efficace incapsulare la dichiarazione dell'enum all'interno di una classe.  Questo linguaggio è stato sviluppato all'epoca di cfront 2.0 presso Bell Laboratories anche allo scopo di risolvere il problema dell'inquinamento globale dei nomi.  
  
 Nella versione beta originale della nuova libreria iostream di Jerry Schwarz di Bell Laboratories, non erano state incapsulate tutte le enumerazioni associate definite per la libreria e gli enumeratori comuni, come `read`, `write`, `append` e così via, impedivano agli utenti di compilare il codice esistente.  Una soluzione consiste nel modificare i nomi, ad `io_read`, `io_write`, e così via. Un'altra soluzione consiste nel modificare la lingua aggiungendo l'ambito a un'enumerazione, ma questa non è quindi possibile.  La soluzione intermedia era incapsulare l'enumerazione all'interno della classe o della gerarchia di classi, inserendo sia il nome di tag che gli enumeratori dell'enumerazione nell'ambito della classe contenitore. L'inserimento delle enumerazioni all'interno delle classi non era inizialmente basato su motivazioni concettuali, ma costituiva una risposta pratica al problema dell'inquinamento dello spazio dei nomi globale.  
  
 Con l'enumerazione di [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], l'incapsulamento di un'enumerazione all'interno di una classe non offre alcun vantaggio significativo.  Considerando gli spazi dei nomi `System`, è infatti possibile osservare che enumerazioni, classi e interfacce appartengono tutte allo stesso spazio di dichiarazione.  
  
## Vedere anche  
 [Tipi di valore e relativi comportamenti \(C\+\+\/CLI\)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)   
 [enum class](../windows/enum-class-cpp-component-extensions.md)