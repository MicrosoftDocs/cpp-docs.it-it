---
title: 'Procedura: diagnosticare e risolvere i problemi di compatibilità di Assembly (C + + CLI) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- versioning, diagnosing conflicts
- versioning
- exceptions, diagnosing odd behavior
- compatibility, between assemblies
ms.assetid: 297c71e3-04a8-4d24-a5dc-b04a2c5cc6fb
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a175705bd5d303187a11bf3e7779669a3a30e483
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-diagnose-and-fix-assembly-compatibility-problems-ccli"></a>Procedura: diagnosticare e correggere i problemi di compatibilità degli assembly (C++/CLI)
Questo argomento viene illustrato cosa può accadere quando la versione di un assembly a cui fa riferimento in fase di compilazione non corrisponde alla versione dell'assembly a cui fa riferimento in fase di esecuzione e come evitare il problema.  
  
 Quando viene compilato un assembly, è possibile fare riferimento ad altri assembly con il `#using` sintassi. Durante la compilazione, questi assembly sono accessibili dal compilatore. Informazioni da questi assembly vengono utilizzate per prendere decisioni di ottimizzazione.  
  
 Tuttavia, se l'assembly di riferimento viene modificato e ricompilato ma non si ricompila l'assembly di riferimento basato su di esso, gli assembly potrebbero non essere ancora compatibile. Le decisioni di ottimizzazione valide potrebbero non essere corrette rispetto alla nuova versione di assembly. A causa di incompatibilità, potrebbero verificarsi diversi errori di runtime. Non vi è alcuna eccezione specifico che verrà prodotto in tali casi. Il modo in cui che viene segnalato l'errore in fase di esecuzione dipende dalla natura della modifica del codice che ha causato il problema.  
  
 Questi errori non devono essere un problema nel codice di produzione finale fino a quando viene ricompilato l'intera applicazione per la versione rilasciata del prodotto. Gli assembly che vengono rilasciati al pubblico devono essere contrassegnati con un numero di versione ufficiale, in modo che evitare questi problemi. Per altre informazioni, vedere [Controllo delle versioni degli assembly](/dotnet/framework/app-domains/assembly-versioning).  
  
### <a name="diagnosing-and-fixing-an-incompatibility-error"></a>La diagnosi e la correzione di un errore di incompatibilità  
  
1.  Se si rilevano le eccezioni di runtime o altre condizioni di errore che si verificano nel codice che fa riferimento a un altro assembly e nessun altro cause identificata, è possibile che sia presente un assembly obsoleto.  
  
2.  Innanzitutto, isolare e riprodurre l'eccezione o un'altra condizione di errore. Un problema che si verifica a causa di un'eccezione non aggiornata deve essere riproducibile.  
  
3.  Controllare il timestamp di tutti gli assembly a cui fa riferimento nell'applicazione.  
  
4.  Se il timestamp di tutti gli assembly di riferimento successivo al timestamp dell'ultima compilazione dell'applicazione, l'applicazione non è aggiornato. In questo caso, ricompilare l'applicazione con l'assembly più recente e apportare eventuali modifiche al codice necessarie.  
  
5.  Eseguire nuovamente l'applicazione, completare i passaggi per riprodurre il problema e verificare che non si verifica l'eccezione.  
  
## <a name="example"></a>Esempio  
 Il programma seguente viene illustrato il problema riducendo l'accessibilità di un metodo, e durante il tentativo di accedere a tale metodo in un altro assembly senza ricompilare. Provare a compilare `changeaccess.cpp` prima. Questo è l'assembly di riferimento verrà modificato. Compilare quindi `referencing.cpp`. La compilazione ha esito positivo. Ora, ridurre l'accessibilità del metodo chiamato. Ricompilare `changeaccess.cpp` con il flag `/DCHANGE_ACCESS`. In questo modo il metodo protetto, anziché privato, pertanto può più essere chiamato legalmente. Senza dover ricompilare `referencing.exe`, eseguire nuovamente l'applicazione. Un'eccezione <xref:System.MethodAccessException> verrà generato.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [#using (direttiva)](../preprocessor/hash-using-directive-cpp.md)   
 [Tipi gestiti (C++/CLI)](../dotnet/managed-types-cpp-cli.md)