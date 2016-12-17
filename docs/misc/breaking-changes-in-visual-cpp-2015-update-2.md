---
title: "Modifiche importanti apportate a Visual C++ 2015 Update 2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5545ce3f-d8da-4007-88b7-8dba7dcd4d10
caps.latest.revision: 8
caps.handback.revision: 8
ms.author: "mithom"
---
# Modifiche importanti apportate a Visual C++ 2015 Update 2
Quando si esegue l'aggiornamento a Visual C\+\+ 2015 Update 2 CTP potrebbero verificarsi errori di compilazione e\/o runtime nel codice precedentemente compilato ed eseguito correttamente. Le modifiche apportate al compilatore o al comportamento in fase di esecuzione che provocano questi problemi sono note come *modifiche importanti* e in genere sono richieste dalle modifiche nel linguaggio C\+\+ standard, nelle firme di funzione o nel layout degli oggetti in memoria.  
  
 Nella parte restante di questo articolo sono descritte le modifiche importanti in Visual C\+\+ 2015 Update 2 CTP e in questo articolo i termini "nuovo comportamento" o "ora" fanno riferimento a quella versione. I termini "vecchio comportamento" e "precedente" fanno riferimento a Visual C\+\+ 2015 Update 1 e alle versioni precedenti. Per informazioni sulle modifiche importanti apportate tra la versione iniziale di Visual C\+\+ 2015 e Visual C\+\+ 2015 Update 1, vedere [Modifiche importanti apportate in Update 1](../misc/breaking-changes-in-visual-cpp-2015-update-1.md). Per informazioni sulle modifiche importanti apportate tra Visual C\+\+ 2013 e Visual C\+\+ 2015, vedere [Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
-   [Modifiche importanti apportate al compilatore](#BK_compiler)  
  
##  <a name="BK_compiler"></a> Compilatore Visual C\+\+  
  
-   **Errori e avvisi aggiuntivi potrebbero essere generati in seguito a un supporto parziale per l'espressione SFINAE**  
  
     Le versioni precedenti del compilatore non analizzavano alcuni tipi di espressioni negli identificatori `decltype` a causa della mancanza di supporto per l'espressione SFINAE. Questo comportamento precedente non era corretto e non è conforme allo standard C\+\+. Grazie ai costanti miglioramenti alla conformità, ora il compilatore analizza le espressioni e ha un supporto parziale per l'espressione SFINAE. Di conseguenza, ora vengono visualizzati avvisi ed errori rilevati nelle espressioni non analizzati dalle versioni precedenti del compilatore.  
  
     Quando questo nuovo comportamento analizza un'espressione `decltype` che include un tipo non ancora dichiarato, il compilatore genera l'errore C2039.  
  
 **errore C2039: *'type'*: non è un membro di *'\`global namespace''***     Esempio 1: uso di un tipo non dichiarato \(prima\)  
  
<CodeContentPlaceHolder>0</CodeContentPlaceHolder>  
     Esempio 1 \(dopo\)  
  
<CodeContentPlaceHolder>1</CodeContentPlaceHolder>  
     Quando questo nuovo comportamento analizza un'espressione `decltype` in cui non è presente un utilizzo necessario della parola chiave `typename` per specificare che il nome dipendente è un tipo, il compilatore genera l'avviso C4346 e l'errore C2923.  
  
 **avviso C4346: *'S2\<T\>::Type'*: il nome dipendente non è un tipo errore C2923: *'s1'*: *'S2\<T\>::Type'* non è un argomento di tipo modello per il parametro *'T'***     Esempio 2: il nome dipendente non è un tipo \(prima\)  
  
<CodeContentPlaceHolder>2</CodeContentPlaceHolder>  
     Esempio 2 \(dopo\)  
  
<CodeContentPlaceHolder>3</CodeContentPlaceHolder>  
-   `volatile` Le variabili membro **impediscono i costruttori e gli operatori di assegnazione definiti in modo implicito**  
  
     Le versioni precedenti del compilatore consentivano a una classe con variabili membro `volatile` di generare automaticamente costruttori di copia\/spostamento predefiniti e operatori di assegnazione di copia\/spostamento predefiniti. Questo comportamento precedente non era corretto e non è conforme allo standard C\+\+. Ora il compilatore presuppone che una classe con variabili membro volatili includa operatori di costruzione e di assegnazione non semplici e, di conseguenza, impedisce la generazione automatica delle implementazioni predefinite di questi operatori.  Quando questa classe è un membro di un'unione \(o un'unione anonima all'interno di una classe\), i costruttori di copia\/spostamento e gli operatori di assegnazione di copia\/spostamento dell'unione \(o della classe che contiene l'unione anonima\) vengono definiti in modo implicito come eliminati. Il tentativo di costruire o copiare l'unione \(o la classe che contiene l'unione anonima\) senza definirli in modo esplicito è un errore e, di conseguenza, il compilatore genera l'errore C2280.  
  
 **errore C2280: *'B::B\(const B &\)'*: tentativo di fare riferimento a una funzione eliminata**     Esempio \(prima\)  
  
<CodeContentPlaceHolder>4</CodeContentPlaceHolder>  
     Esempio \(dopo\)  
  
<CodeContentPlaceHolder>5</CodeContentPlaceHolder>  
-   **Le funzioni membro statiche non supportano i qualificatori CV.**  
  
     Le versioni precedenti di Visual C\+\+ 2015 consentivano alle funzioni membro statiche di avere qualificatori CV. Questo comportamento è dovuto a una regressione in Visual C\+\+ 2015 e Visual C\+\+ 2015 Update 1. Visual C\+\+ 2013 e le versioni precedenti di Visual C\+\+ non accettano il codice scritto in questo modo. Il comportamento di Visual C\+\+ 2015 e Visual C\+\+ 2015 Update 1 non è corretto e non è conforme allo standard C\+\+.  Visual Studio 2015 Update 2 non accetta il codice scritto in questo modo e genera l'errore del compilatore C2511.  
  
 **errore C2511: 'void A::func\(void\) const': funzione membro in overload non trovata in 'A'**     Esempio \(prima\)  
  
<CodeContentPlaceHolder>6</CodeContentPlaceHolder>  
     Esempio \(dopo\)  
  
<CodeContentPlaceHolder>7</CodeContentPlaceHolder>  
-   **La dichiarazione con prototipo di tipo enum non è consentita nel codice WinRT** \(interessa solo \/ZW\)  
  
     Il codice compilato per Windows Runtime \(WinRT\) non consente la dichiarazione con prototipo dei tipi `enum`, analogamente a quanto accade quando il codice C\+\+ gestito viene compilato per .NET Framework usando l'opzione \/clr del compilatore. Questo comportamento garantisce che le dimensioni di un'enumerazione siano sempre note e possano essere proiettate correttamente nel sistema di tipi WinRT. Il compilatore non accetta il codice scritto in questo modo e genera gli errori C2599 e C3197.  
  
 **errore C2599: *'CustomEnum'*: per i tipi enum di WinRT non sono consentite le dichiarazioni con prototipo errore C3197: *'public'*: utilizzabile solo nelle definizioni**     Esempio \(prima\)  
  
    ```cpp  
    namespace A {  
      public enum class CustomEnum: int32;  // forward declaration; error C2599, error C3197  
    }  
  
    namespace A {  
      public enum class CustomEnum: int32  
      {  
        Value1  
      };  
    }  
  
    public ref class Component sealed  
    {  
    public:  
      CustomEnum f()  
      {  
        return CustomEnum::Value1;  
      }  
    };  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
  
              // forward declaration of CustomEnum removed  
  
    namespace A {  
      public enum class CustomEnum: int32  
      {  
        Value1  
      };  
    }  
  
    public ref class Component sealed  
    {  
    public:  
      CustomEnum f()  
      {  
        return CustomEnum::Value1;  
      }  
    };  
    ```  
  
-   **È possibile che le funzioni new o delete dell'operatore non membro in overload non siano dichiarate come inline** \(livello 1 \(\/W1\) attivato per impostazione predefinita\)  
  
     Le versioni precedenti del compilatore non generano un avviso quando le funzioni new e delete di un operatore non membro vengono dichiarate inline. Il codice scritto in questo modo non è valido \(diagnostica non necessaria\) e può causare problemi di memoria difficili da diagnosticare derivanti dalla mancata corrispondenza degli operatori new e delete \(in particolare quando sono usati insieme con la deallocazione dimensionata\).   Ora il compilatore genera l'avviso C4595 per identificare il codice scritto in questo modo.  
  
 **avviso C4595: *'operator new'*: è possibile che le funzioni new o delete dell'operatore non membro non siano dichiarate come inline**     Esempio \(prima\)  
  
    ```cpp  
  
              inline void* operator new(size_t sz)  // warning C4595  
    {  
      ...  
    }  
    ```  
  
     Esempio \(dopo\)  
  
    ```cpp  
  
              void* operator new(size_t sz)  // removed inline  
    {  
      ...  
    }  
    ```  
  
     La correzione del codice scritto in questo modo potrebbe richiedere lo spostamento delle definizioni dell'operatore da un file di intestazione a un file di origine corrispondente.