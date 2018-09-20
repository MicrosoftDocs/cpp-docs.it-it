---
title: Tipo Enum di CLR | Microsoft Docs
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
ms.openlocfilehash: a39c451bcff7b5b3b1d7dd9f0d3925616b9d6aab
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436227"
---
# <a name="clr-enum-type"></a>Tipo enum di CLR

La dichiarazione e il comportamento delle enumerazioni è stato modificato dalle estensioni gestite per C++ in Visual C++.

La dichiarazione di enumerazione delle estensioni gestite è preceduta dal `__value` (parola chiave). L'idea è di distinguere l'enumerazione nativa dall'enumerazione derivata da CLR `System::ValueType`, mentre funzionalità analoghe. Ad esempio:

```
__value enum e1 { fail, pass };
public __value enum e2 : unsigned short  {
   not_ok = 1024,
   maybe, ok = 2048
};
```

La nuova sintassi consente di risolvere il problema della distinzione nativa e le enumerazioni CLR che presentano la natura di classe di quest'ultimo invece le sue radici di tipo valore. Di conseguenza, il `__value` parola chiave verrà rimossi e viene sostituito con la coppia di parole chiave con spaziatura `enum class`. Ciò prevede una simmetria (parola chiave) associati alle dichiarazioni di classi di interfaccia, valore e riferimento:

```
enum class ec;
value class vc;
ref class rc;
interface class ic;
```

La conversione della coppia di enumerazione `e1` e `e2` nella nuova sintassi è simile al seguente:

```
enum class e1 { fail, pass };
public enum class e2 : unsigned short {
   not_ok = 1024,
   maybe, ok = 2048
};
```

Oltre a questa piccola modifica sintattica, il comportamento del tipo di enumerazione CLR è cambiato in diversi modi:

- Una dichiarazione con prototipo di un'enumerazione CLR non è più supportata. Non esiste un mapping. E viene semplicemente contrassegnato come errore in fase di compilazione.

```
__value enum status; // Managed Extensions: ok
enum class status;   // new syntax: error
```

- Risoluzione dell'overload tra i tipi aritmetici incorporati e `Object` gerarchia delle classi è state invertite tra le due versioni del linguaggio. Come effetto collaterale, enumerazioni CLR non è più in modo implicito vengono convertite in tipi aritmetici.

- Nella nuova sintassi, un enum CLR mantiene il proprio ambito, che non avviene nelle estensioni gestite. Gli enumeratori in precedenza, erano visibili all'interno dell'ambito contenitore dell'enumerazione. A questo punto, gli enumeratori vengono incapsulati all'interno dell'ambito dell'enumerazione.

## <a name="clr-enums-are-a-kind-of-object"></a>Enum di CLR sono un tipo di oggetto

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

Per i programmatori C++ nativo, naturale rispondere alla domanda quale istanza di overload `f()` viene richiamato è quello di `f(int)`. Un'enumerazione è una costante integrale simbolica e fa parte di promozioni a intero standard che hanno la precedenza in questo caso.  E infatti nelle estensioni gestite questo è l'istanza a cui la chiamata viene risolta. Ciò ha causato un numero di eventi imprevisti - non in caso di utilizzo in C++ nativo, ma quando è necessaria l'interazione con il framework BCL (Base Class Library) esistente, in cui un' `Enum` è una classe derivata indirettamente da `Object`. Nella finestra di progettazione del linguaggio Visual C++, l'istanza di `f()` viene richiamato di `f(Object^)`.

Il modo in cui che Visual C++ ha scelto di applicare questo comportamento è di non supportare le conversioni implicite tra un tipo enum di CLR e i tipi aritmetici. Ciò significa che qualsiasi assegnazione di un oggetto di un tipo enum CLR a un tipo aritmetico richiederà un cast esplicito. Pertanto, si consideri ad esempio

```
void f( int );
```

come nelle estensioni gestite, la chiamata di un metodo non in overload

```
f( rslt ); // ok: Managed Extensions; error: new syntax
```

è ok e il valore racchiuso `rslt` viene implicitamente convertito in un valore integer. In Visual C++, questa chiamata non riesce a compilare. Per convertire correttamente, è necessario inserire un operatore di conversione:

```
f( safe_cast<int>( rslt )); // ok: new syntax
```

## <a name="the-scope-of-the-clr-enum-type"></a>L'ambito del tipo di enumerazione CLR

Una delle modifiche tra i linguaggi C e C++ è stata l'aggiunta di C++ dell'ambito all'interno della struttura struct. In C, uno struct è solo un'aggregazione di dati senza supporto di un'interfaccia o un ambito associato. Questo era piuttosto un cambiamento radicale al momento e si è verificato un problema controverso per molti nuovi utenti di C++ provenienti dal linguaggio C. La relazione tra il nativo e un enum CLR è analoga.

Nelle estensioni gestite, è stato effettuato un tentativo per definire in modo debole inseriti nomi per gli enumeratori di un enum CLR per simulare l'assenza dell'ambito all'interno dell'enumerazione nativa. Non è stato ottenuto ha esito positivo. Il problema è che in questo modo gli enumeratori per un evento spill nello spazio dei nomi globale, causando difficile da gestire conflitti di nomi. Nella nuova sintassi, sono stati resi conformi a altri linguaggi CLR di supporto degli ambiti all'interno dell'enumerazione CLR.

Ciò significa che qualsiasi uso non qualificato di un enumeratore di un enum CLR non verrà riconosciuto nella nuova sintassi. Esaminiamo un esempio reale.

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

Ognuno dei tre non qualificato usi dei nomi di enumeratore (`(1)`, `(2)`, e `(3)`) dovranno essere qualificati nella traduzione per la nuova sintassi affinché il codice sorgente da compilare. Di seguito è illustrata la conversione corretta del codice sorgente originale:

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

Questa operazione modificherà la strategia di progettazione tra nativo e un enum CLR. Con un enum CLR mantiene un ambito associato in Visual C++, è necessario né efficace per incapsulare la dichiarazione di enumerazione all'interno di una classe. Questo linguaggio è sviluppato alla stessa ora di cfront 2.0 presso Bell Laboratories anche per risolvere il problema inquinamento nome globale.

Nella versione beta originale della nuova libreria iostream Jerry Schwarz presso Bell Laboratories, non erano state incapsulate definite per la libreria e gli enumeratori comuni, ad esempio, tutte le enumerazioni associate `read`, `write`, `append`e così via , rendeva quasi impossibile agli utenti di compilare il codice esistente. Sarebbe stata una soluzione consiste nel modificare i nomi, ad esempio `io_read`, `io_write`e così via. Una seconda soluzione sarebbe stato modificare la lingua tramite l'aggiunta di ambito per un'enumerazione, ma questo non poteva essere al momento. La soluzione intermedia è stata per incapsulare l'enumerazione all'interno della classe o classe gerarchia, in cui il nome di tag e gli enumeratori dell'enumerazione popolare l'ambito della classe contenitore.) Vale a dire la motivazione per il posizionamento all'interno delle classi, enumerazioni, almeno inizialmente, non è stato teorico, ma una pratica risposta al problema inquinamento dello spazio dei nomi globale.

Con l'enumerazione di Visual C++, non è più utile accattivanti che incapsula un'enumerazione all'interno di una classe. In effetti, se si esamina il `System` spazi dei nomi, verrà visualizzato tale enumerazioni, classi e interfacce tutti allo stesso spazio di dichiarazione.

## <a name="see-also"></a>Vedere anche

[Tipi di valore e relativi comportamenti (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
[classe di enumerazione](../windows/enum-class-cpp-component-extensions.md)