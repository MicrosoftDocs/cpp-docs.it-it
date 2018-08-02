---
title: Utilizzo di dllimport e dllexport nelle classi C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- exporting classes [C++]
- declarations [C++], class
- exportable classes [C++]
- classes [C++], declaring
- classes [C++], exportable and inheritance
- inheritance [C++], exportable classes [C++]
- dllimport attribute [C++], classes
- declaring classes [C++]
- dllexport attribute [C++]
- dllexport attribute [C++], classes [C++]
ms.assetid: 8d7d1303-b9e9-47ca-96cc-67bf444a08a9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fe1454ee615f489190ec455adabcd4bdecb4e0f0
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39460820"
---
# <a name="using-dllimport-and-dllexport-in-c-classes"></a>Utilizzo di dllimport e dllexport nelle classi C++
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 È possibile dichiarare le classi C++ con la **dllimport** oppure **dllexport** attributo. Questi formati implicano l'importazione o l'esportazione dell'intera classe. Le classi esportate in questo modo vengono denominate classi esportabili.  
  
 Nell'esempio seguente viene definita la classe esportabile. Viene eseguita l'esportazione di tutte le relative funzioni membro e di tutti i dati statici:  
  
```cpp 
#define DllExport   __declspec( dllexport )  
  
class DllExport C {  
   int i;  
   virtual int func( void ) { return 1; }  
};  
```  
  
 Si noti che utilizzo esplicito del **dllimport** e **dllexport** attributi sui membri di una classe esportabile non è consentito.  
  
##  <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bdllexportclasses"></a> Classi dllexport  
 Quando si dichiara una classe **dllexport**, vengono esportati tutte le relative funzioni membro e membri dati statici. È necessario fornire le definizioni di tutti i membri nello stesso programma. In caso contrario, viene generato un errore del linker. L'unica eccezione a questa regola viene applicata alle funzioni virtuali pure per le quali non è necessario fornire definizioni esplicite. Tuttavia, poiché un distruttore di una classe astratta viene sempre chiamato dal distruttore della classe base, i distruttori virtuali puri devono fornire sempre una definizione. Si noti che queste regole sono identiche per le classi non esportabili.  
  
 Se si esportano dati di tipo classe o funzioni che restituiscono classi, assicurarsi di esportare la classe.  
  
##  <a name="_pluslang_dllexport_classesdllexportclasses"></a> Classi dllimport  
 Quando si dichiara una classe **dllimport**, vengono importati tutti i relativi membri dati statici e funzioni membro. A differenza del comportamento di **dllimport** e **dllexport** nei tipi nonclass, i membri dati statici non è possibile specificare una definizione nello stesso programma in cui un **dllimport** classe è definito.  
  
##  <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2binheritanceandexportableclasses"></a> Ereditarietà e classi esportabili  
 Tutte le classi base di una classe esportabile devono essere esportabili. In caso contrario, viene generato un avviso del compilatore. Inoltre, tutti i membri accessibili che rappresentano classi devono essere esportabili. Questa regola consente una **dllexport** classe da cui ereditare un **dllimport** (classe) e un **dllimport** classe da cui ereditare un **dllexport** la classe (anche se quest'ultimo non è consigliato). Di norma, qualsiasi elemento accessibile al client della DLL (in base alle regole di accesso di C++) deve far parte dell'interfaccia esportabile. Sono inclusi i membri dati privati a cui viene fatto riferimento nelle funzioni inline.  
  
##  <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bselectivememberimportexport"></a> Importazione/esportazione selettiva dei membri  
 Poiché le funzioni membro e i dati statici all'interno di una classe dispongono implicitamente un collegamento esterno, è possibile dichiararli con il **dllimport** oppure **dllexport** dell'attributo, a meno che non viene esportata l'intera classe. Se l'intera classe viene importata o esportata, la dichiarazione esplicita delle funzioni membro e i dati come **dllimport** oppure **dllexport** non è consentito. Se si dichiara un membro dati statici all'interno di una definizione di classe come **dllexport**, una definizione deve verificarsi in un punto qualsiasi all'interno del programma stesso (come con collegamento esterno nonclass).  
  
 Analogamente, è possibile dichiarare membri funzioni con il **dllimport** oppure **dllexport** attributi. In questo caso, è necessario fornire un **dllexport** definizione in qualche punto all'interno dello stesso programma.  
  
 È opportuno notare diversi aspetti importanti relativi all'importazione e all'esportazione selettive dei membri:  
  
-   L'importazione/esportazione selettiva dei membri è più adatta per fornire una versione dell'interfaccia della classe esportata più restrittiva, ovvero una per la quale è possibile progettare una DLL che esponga un numero inferiore di funzionalità pubbliche e private di quante ne consentirebbe il linguaggio. È inoltre utile per l'ottimizzazione dell'interfaccia esportabile: quando si sa che il client non è per definizione in grado di accedere ai dati privati, non è necessario esportare l'intera classe.  
  
-   Se si esporta una funzione virtuale di una classe, è necessario esportarle tutte o fornire almeno le versioni che possono essere utilizzate direttamente dal client.  
  
-   Se si dispone di una classe in cui si utilizza l'importazione o l'esportazione selettiva dei membri con le funzioni virtuali, tali funzioni devono trovarsi nell'interfaccia esportabile o essere definite inline (visibili al client).  
  
-   Se si definisce un membro come **dllexport** ma non includerlo nella definizione della classe, viene generato un errore del compilatore. È necessario definire il membro nell'intestazione della classe.  
  
-   Anche se la definizione dei membri della classe come **dllimport** oppure **dllexport** è consentito, non è possibile ignorare l'interfaccia specificata nella definizione della classe.  
  
-   Se si definisce una funzione membro in una posizione diversa dal corpo della definizione di classe in cui è stata dichiarata, viene generato un avviso se la funzione viene definita come **dllexport** oppure **dllimport** (se presente è diversa da cui specificato nella dichiarazione di classe).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)