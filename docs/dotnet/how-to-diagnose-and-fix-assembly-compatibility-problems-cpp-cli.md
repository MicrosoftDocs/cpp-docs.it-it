---
title: "Procedura: diagnosticare e correggere i problemi di compatibilit&#224; degli assembly (C++/CLI) | Microsoft Docs"
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
helpviewer_keywords: 
  - "compatibilità, tra assembly"
  - "eccezioni, diagnosi di comportamenti anomali"
  - "controllo delle versioni"
  - "controllo delle versioni, diagnosi di conflitti"
ms.assetid: 297c71e3-04a8-4d24-a5dc-b04a2c5cc6fb
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: diagnosticare e correggere i problemi di compatibilit&#224; degli assembly (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrato il problema che può verificarsi quando la versione di un assembly a cui viene fatto riferimento in fase di compilazione non corrisponde alla versione dell'assembly a cui viene fatto riferimento in fase di esecuzione, nonché come evitare tale problema.  
  
 Quando viene compilato un assembly, è possibile fare riferimento ad altri assembly con la sintassi `#using`.  Durante la compilazione, il compilatore accede a tali assembly  e le relative informazioni vengono utilizzate per le decisioni di ottimizzazione.  
  
 Se l'assembly a cui viene fatto riferimento viene modificato e ricompilato ma non si ricompila l'assembly dipendente che contiene il riferimento, tuttavia, è possibile che gli assembly non risultino compatibili.  Le decisioni di ottimizzazione inizialmente valide potrebbero non essere corrette rispetto alla nuova versione dell'assembly.  Queste incompatibilità potrebbero determinare diversi errori di runtime.  Non esiste un'eccezione specifica generata in tali casi.  Il modo in cui l'errore viene segnalato in fase di esecuzione dipende dalla natura della modifica del codice che ha causato il problema.  
  
 Tali errori non dovrebbero costituire un problema nel codice di produzione finale, poiché l'intera applicazione verrà rigenerata per la versione rilasciata del prodotto.  Gli assembly rilasciati agli utenti verranno contrassegnati con un numero di versione ufficiale che consentirà di evitare questi problemi.  Per ulteriori informazioni, vedere [Controllo delle versioni degli assembly](../Topic/Assembly%20Versioning.md).  
  
### Diagnosi e correzione di un errore di incompatibilità  
  
1.  Se si rilevano eccezioni di runtime o altre condizioni di errore nel codice che fa riferimento a un altro assembly e non viene identificata un'altra causa, è possibile che sia presente un assembly obsoleto.  
  
2.  Isolare e riprodurre innanzitutto l'eccezione o la condizione di errore.  Un problema causato da un'eccezione di assembly obsoleto deve essere riproducibile.  
  
3.  Controllare il timestamp di qualsiasi assembly a cui viene fatto riferimento nell'applicazione.  
  
4.  Se i timestamp di qualsiasi assembly a cui viene fatto riferimento sono successivi al timestamp dell'ultima compilazione dell'applicazione, l'applicazione è obsoleta.  In questo caso, ricompilare l'applicazione con l'assembly più recente e apportare le modifiche necessarie al codice.  
  
5.  Eseguire nuovamente l'applicazione, completare i passaggi per riprodurre il problema e verificare che l'eccezione non si verifichi.  
  
## Esempio  
 Nel programma riportato di seguito viene illustrato il problema riducendo l'accessibilità di un metodo e tentando di accedere a tale metodo in un altro assembly senza ripetere la compilazione.  Provare a compilare innanzitutto `changeaccess.cpp`,  che rappresenta l'assembly a cui viene fatto riferimento e che verrà modificato.  Compilare quindi `referencing.cpp`.  La compilazione avrà esito positivo.  Ridurre quindi l'accessibilità del metodo chiamato.  Ricompilare `changeaccess.cpp` con il flag `/DCHANGE_ACCESS`.  Il metodo risulterà così protetto, anziché privato, e non potrà più essere chiamato correttamente.  Senza ricompilare `referencing.exe`, eseguire nuovamente l'applicazione.  Verrà generata un'eccezione <xref:System.MethodAccessException>.  
  
```  
// changeaccess.cpp  
// compile with: /clr:safe /LD  
// After the initial compilation, add /DCHANGE_ACCESS and rerun  
// referencing.exe to introduce an error at runtime. To correct  
// the problem, recompile referencing.exe  
  
public ref class Test {  
#if defined(CHANGE_ACCESS)  
protected:  
#else  
public:  
#endif  
  
  int access_me() {  
    return 0;  
  }  
  
};  
  
```  
  
```  
// referencing.cpp  
// compile with: /clr:safe   
#using <changeaccess.dll>  
  
// Force the function to be inline, to override the compiler's own  
// algorithm.  
__forceinline  
int CallMethod(Test^ t) {  
  // The call is allowed only if access_me is declared public  
  return t->access_me();  
}  
  
int main() {  
  Test^ t = gcnew Test();  
  try  
  {  
    CallMethod(t);  
    System::Console::WriteLine("No exception.");  
  }  
  catch (System::Exception ^ e)  
  {  
    System::Console::WriteLine("Exception!");  
  }  
  return 0;  
}  
  
```  
  
## Vedere anche  
 [Direttiva \#using](../preprocessor/hash-using-directive-cpp.md)   
 [Tipi gestiti](../dotnet/managed-types-cpp-cli.md)