---
title: "Utilizzo di dllimport e dllexport in classi C++ | Microsoft Docs"
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
  - "classi [C++], dichiarazione"
  - "classi [C++], esportabili ed ereditarietà"
  - "dichiarazioni [C++], classe"
  - "dichiarazione di classi"
  - "dllexport (attributo) [C++]"
  - "dllexport (attributo) [C++], classi"
  - "attributo dllimport [C++], classi"
  - "classi esportabili [C++]"
  - "esportazione di classi"
  - "ereditarietà [C++], classi esportabili"
ms.assetid: 8d7d1303-b9e9-47ca-96cc-67bf444a08a9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di dllimport e dllexport in classi C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 È possibile dichiarare le classi C\+\+ con l'attributo **dllimport** o `dllexport`.  Questi formati implicano l'importazione o l'esportazione dell'intera classe.  Le classi esportate in questo modo vengono denominate classi esportabili.  
  
 Nell'esempio seguente viene definita la classe esportabile.  Viene eseguita l'esportazione di tutte le relative funzioni membro e di tutti i dati statici:  
  
```  
#define DllExport   __declspec( dllexport )  
  
class DllExport C {  
   int i;  
   virtual int func( void ) { return 1; }  
};  
```  
  
 Si noti che è vietato l'utilizzo esplicito degli attributi **dllimport** e `dllexport` nei membri di una classe esportabile.  
  
##  <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bdllexportclasses"></a> Classi dllexport  
 Quando si dichiara una classe `dllexport`, viene eseguita l'esportazione di tutte le relative funzioni membro e di tutti i membri dati statici.  È necessario fornire le definizioni di tutti i membri nello stesso programma.  In caso contrario, viene generato un errore del linker.  L'unica eccezione a questa regola viene applicata alle funzioni virtuali pure per le quali non è necessario fornire definizioni esplicite.  Tuttavia, poiché un distruttore di una classe astratta viene sempre chiamato dal distruttore della classe base, i distruttori virtuali puri devono fornire sempre una definizione.  Si noti che queste regole sono identiche per le classi non esportabili.  
  
 Se si esportano dati di tipo classe o funzioni che restituiscono classi, assicurarsi di esportare la classe.  
  
##  <a name="_pluslang_dllexport_classesdllexportclasses"></a> Classi dllimport  
 Quando si dichiara una classe **dllimport**, viene eseguita l'importazione di tutte le relative funzioni membro e di tutti i membri dati statici.  A differenza del comportamento di **dllimport** e `dllexport` nei tipi nonclass, i membri dati statici non possono specificare una definizione nello stesso programma in cui viene definita una classe **dllimport**.  
  
##  <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2binheritanceandexportableclasses"></a> Classi di ereditarietà ed esportabili  
 Tutte le classi base di una classe esportabile devono essere esportabili.  In caso contrario, viene generato un avviso del compilatore.  Inoltre, tutti i membri accessibili che rappresentano classi devono essere esportabili.  Questa regola consente a una classe `dllexport` di ereditare da una classe **dllimport** e a una classe **dllimport** di ereditare da una classe `dllexport`, sebbene il secondo caso non sia consigliabile.  Di norma, qualsiasi elemento accessibile al client della DLL \(in base alle regole di accesso di C\+\+\) deve far parte dell'interfaccia esportabile.  Sono inclusi i membri dati privati a cui viene fatto riferimento nelle funzioni inline.  
  
##  <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bselectivememberimportexport"></a> Importazione\/esportazione selettiva dei membri  
 Poiché le funzioni membro e i dati statici di una classe dispongono implicitamente di un collegamento esterno, è possibile dichiararli con l'attributo `dllexport` o **dllimport**, a meno che non venga esportata l'intera classe.  Se viene importata o esportata l'intera classe, la dichiarazione esplicita delle funzioni e dei dati membro come **dllimport** o `dllexport` non è consentita.  Se si dichiara un membro dati statici all'interno di una definizione di classe come `dllexport`, è necessario fornire una definizione in qualche punto all'interno dello stesso programma, come nel caso del collegamento esterno nonclass.  
  
 Analogamente, è possibile dichiarare le funzioni membro con gli attributi **dllimport** o `dllexport`.  In questo caso, è necessario fornire una definizione `dllexport` in qualche punto all'interno dello stesso programma.  
  
 È opportuno notare diversi aspetti importanti relativi all'importazione e all'esportazione selettive dei membri:  
  
-   L'importazione\/esportazione selettiva dei membri è più adatta per fornire una versione dell'interfaccia della classe esportata più restrittiva, ovvero una per la quale è possibile progettare una DLL che esponga un numero inferiore di funzionalità pubbliche e private di quante ne consentirebbe il linguaggio.  È inoltre utile per l'ottimizzazione dell'interfaccia esportabile: quando si sa che il client non è per definizione in grado di accedere ai dati privati, non è necessario esportare l'intera classe.  
  
-   Se si esporta una funzione virtuale di una classe, è necessario esportarle tutte o fornire almeno le versioni che possono essere utilizzate direttamente dal client.  
  
-   Se si dispone di una classe in cui si utilizza l'importazione o l'esportazione selettiva dei membri con le funzioni virtuali, tali funzioni devono trovarsi nell'interfaccia esportabile o essere definite inline \(visibili al client\).  
  
-   Se si definisce un membro come `dllexport`, ma non lo si include nella definizione di classe, viene generato un errore del compilatore.  È necessario definire il membro nell'intestazione della classe.  
  
-   Sebbene sia consentita la definizione dei membri della classe come **dllimport** o `dllexport`, non è possibile eseguire l'override dell'interfaccia specificata nella definizione della classe.  
  
-   Se si definisce una funzione membro in una posizione diversa dal corpo della definizione di classe in cui è stata dichiarata, se la funzione viene definita come `dllexport` o **dllimport**, ovvero se è diversa da quella specificata nella dichiarazione della classe, viene generato un avviso.  
  
### Fine sezione specifica Microsoft  
  
## Vedere anche  
 [dllexport, dllimport](../cpp/dllexport-dllimport.md)