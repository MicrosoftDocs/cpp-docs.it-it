---
title: Utilizzo di dllimport e dllexport nelle classi C++
ms.date: 11/04/2016
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
ms.openlocfilehash: 4687db45c767f4323c97aff0a685aa3aeeb83e94
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227010"
---
# <a name="using-dllimport-and-dllexport-in-c-classes"></a>Utilizzo di dllimport e dllexport nelle classi C++

**Specifico di Microsoft**

È possibile dichiarare le classi C++ con **`dllimport`** l' **`dllexport`** attributo o. Questi formati implicano l'importazione o l'esportazione dell'intera classe. Le classi esportate in questo modo vengono denominate classi esportabili.

Nell'esempio seguente viene definita la classe esportabile. Viene eseguita l'esportazione di tutte le relative funzioni membro e di tutti i dati statici:

```cpp
#define DllExport   __declspec( dllexport )

class DllExport C {
   int i;
   virtual int func( void ) { return 1; }
};
```

Si noti che l'utilizzo esplicito degli **`dllimport`** **`dllexport`** attributi e sui membri di una classe esportabile non è consentito.

## <a name="dllexport-classes"></a><a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bdllexportclasses"></a>Classi dllexport

Quando si dichiara una classe **`dllexport`** , vengono esportate tutte le relative funzioni membro e i membri dati statici. È necessario fornire le definizioni di tutti i membri nello stesso programma. In caso contrario, viene generato un errore del linker. L'unica eccezione a questa regola viene applicata alle funzioni virtuali pure per le quali non è necessario fornire definizioni esplicite. Tuttavia, poiché un distruttore di una classe astratta viene sempre chiamato dal distruttore della classe base, i distruttori virtuali puri devono fornire sempre una definizione. Si noti che queste regole sono identiche per le classi non esportabili.

Se si esportano dati di tipo classe o funzioni che restituiscono classi, assicurarsi di esportare la classe.

## <a name="dllimport-classes"></a><a name="_pluslang_dllexport_classesdllexportclasses"></a>Classi dllimport

Quando si dichiara una classe **`dllimport`** , vengono importate tutte le relative funzioni membro e i membri dati statici. A differenza del comportamento di **`dllimport`** e **`dllexport`** sui tipi non di classe, i membri dati statici non possono specificare una definizione nello stesso programma in cui **`dllimport`** è definita una classe.

## <a name="inheritance-and-exportable-classes"></a><a name="_pluslang_using_dllimport_and_dllexport_in_c2b2binheritanceandexportableclasses"></a>Classi di ereditarietà ed esportabili

Tutte le classi base di una classe esportabile devono essere esportabili. In caso contrario, viene generato un avviso del compilatore. Inoltre, tutti i membri accessibili che rappresentano classi devono essere esportabili. Questa regola consente a una **`dllexport`** classe di ereditare da una **`dllimport`** classe e una **`dllimport`** classe per ereditare da una **`dllexport`** classe (anche se quest'ultima non è consigliata). Di norma, qualsiasi elemento accessibile al client della DLL (in base alle regole di accesso di C++) deve far parte dell'interfaccia esportabile. Sono inclusi i membri dati privati a cui viene fatto riferimento nelle funzioni inline.

## <a name="selective-member-importexport"></a><a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bselectivememberimportexport"></a>Importazione/esportazione di membri selettivi

Poiché le funzioni membro e i dati statici all'interno di una classe dispongono implicitamente di un collegamento esterno, è possibile dichiararli con l' **`dllimport`** **`dllexport`** attributo o, a meno che non venga esportata l'intera classe. Se viene importata o esportata l'intera classe, la dichiarazione esplicita di funzioni membro e dati come **`dllimport`** o non **`dllexport`** è consentito. Se si dichiara un membro dati statici all'interno di una definizione di classe come **`dllexport`** , una definizione deve essere eseguita in un punto qualsiasi all'interno dello stesso programma (come nel caso di un collegamento esterno senza classe).

Analogamente, è possibile dichiarare le funzioni membro con gli **`dllimport`** **`dllexport`** attributi o. In questo caso, è necessario fornire una **`dllexport`** definizione in qualche punto all'interno dello stesso programma.

È opportuno notare diversi aspetti importanti relativi all'importazione e all'esportazione selettive dei membri:

- L'importazione/esportazione selettiva dei membri è più adatta per fornire una versione dell'interfaccia della classe esportata più restrittiva, ovvero una per la quale è possibile progettare una DLL che esponga un numero inferiore di funzionalità pubbliche e private di quante ne consentirebbe il linguaggio. È inoltre utile per l'ottimizzazione dell'interfaccia esportabile: quando si sa che il client non è per definizione in grado di accedere ai dati privati, non è necessario esportare l'intera classe.

- Se si esporta una funzione virtuale di una classe, è necessario esportarle tutte o fornire almeno le versioni che possono essere utilizzate direttamente dal client.

- Se si dispone di una classe in cui si utilizza l'importazione o l'esportazione selettiva dei membri con le funzioni virtuali, tali funzioni devono trovarsi nell'interfaccia esportabile o essere definite inline (visibili al client).

- Se si definisce un membro come **`dllexport`** , ma non lo si include nella definizione di classe, viene generato un errore del compilatore. È necessario definire il membro nell'intestazione della classe.

- Sebbene sia consentita la definizione dei membri della classe come **`dllimport`** o **`dllexport`** , non è possibile eseguire l'override dell'interfaccia specificata nella definizione della classe.

- Se si definisce una funzione membro in una posizione diversa dal corpo della definizione di classe in cui è stata dichiarata, viene generato un avviso se la funzione è definita come **`dllexport`** o **`dllimport`** (se questa definizione è diversa da quella specificata nella dichiarazione di classe).

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
