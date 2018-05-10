---
title: "Procedura: specificare criteri dell'utilità di pianificazione specifici | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- specifying scheduler policies [Concurrency Runtime]
- scheduler policies, specifying [Concurrency Runtime]
ms.assetid: 9c5149f9-ac34-4ff3-9e79-0bad103e4e6b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 988540c19ab94e841e274637b581f0ce8031df13
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="how-to-specify-specific-scheduler-policies"></a>Procedura: Definire criteri dell'utilità di pianificazione specifici
Criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata l'utilità di pianificazione quando gestisce le attività. In questo argomento viene illustrato come utilizzare i criteri dell'utilità di pianificazione per aumentare la priorità di thread di un'attività che visualizza un indicatore di stato nella console.  
  
 Per un esempio che utilizza criteri di utilità di pianificazione personalizzata con gli agenti asincroni, vedere [procedura: creare agenti che i criteri dell'utilità di pianificazione specifici utilizzare](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente esegue due attività in parallelo. La prima attività calcola il valore n<sup>th</sup> numero di Fibonacci. La seconda attività Visualizza un indicatore di stato nella console.  
  
 La prima attività utilizza la scomposizione ricorsiva per calcolare il numero di Fibonacci. Ovvero, in modo ricorsivo ogni attività crea sottoattività per calcolare il risultato complessivo. Un'attività che utilizza la scomposizione ricorsiva potrebbe utilizzare tutte le risorse disponibili e pertanto esaurire altre attività. In questo esempio, l'attività che visualizza l'indicatore di stato che non vengano tempestiva accesso alle risorse di elaborazione.  
  
 Per consentire all'attività che consente di stampare un corso messaggio equo l'accesso alle risorse di elaborazione, in questo esempio vengono utilizzati i passaggi descritti in [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza di utilità di pianificazione che dispone di un criterio personalizzato. Il criterio personalizzato specifica la priorità di thread per la classe di priorità più alta.  
  
 Questo esempio viene utilizzato il [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md) classi per stampare l'indicatore di stato. Queste classi dispongono di versioni dei costruttori che accettano un riferimento a un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oggetto che pianifica le. L'esempio Usa l'utilità di pianificazione predefinita per pianificare l'attività che calcola il numero di Fibonacci e l'istanza dell'utilità di pianificazione per pianificare l'attività che visualizza l'indicatore di stato.  
  
 Per illustrare i vantaggi dell'utilizzo dell'utilità di pianificazione che dispone di un criterio personalizzato, questo esempio viene eseguita due volte l'intera attività. Viene innanzitutto utilizzato l'utilità di pianificazione predefinita per entrambe le attività di pianificazione. Viene quindi utilizzata l'utilità di pianificazione predefinita per pianificare la prima attività e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare la seconda attività.  
  
 [!code-cpp[concrt-scheduler-policy#1](../../parallel/concrt/codesnippet/cpp/how-to-specify-specific-scheduler-policies_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Default scheduler:  
...........................................................................done  
Scheduler that has a custom policy:  
...........................................................................done  
```  
  
 Sebbene entrambi i set di attività producono lo stesso risultato, la versione che utilizza un criterio personalizzato consente all'attività che visualizza l'indicatore di stato per l'esecuzione di una priorità in modo che si comporta più rispondente.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduler-policy.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc dell'utilità di pianificazione-Policy. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)   
 [Procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)   
 [Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)

