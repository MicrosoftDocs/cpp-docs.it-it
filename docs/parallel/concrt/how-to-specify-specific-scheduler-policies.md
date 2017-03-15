---
title: "Procedura: Definire criteri dell&#39;utilit&#224; di pianificazione specifici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "specifica dei criteri dell'utilità di pianificazione [Runtime di concorrenza]"
  - "criteri dell'utilità di pianificazione, specifica [Runtime di concorrenza]"
ms.assetid: 9c5149f9-ac34-4ff3-9e79-0bad103e4e6b
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# Procedura: Definire criteri dell&#39;utilit&#224; di pianificazione specifici
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata l'utilità di pianificazione quando vengono gestite le attività. In questo argomento viene illustrato come utilizzare i criteri dell'utilità di pianificazione per aumentare la priorità di thread di un'attività che visualizza un indicatore di stato nella console.  
  
 Per un esempio che utilizza criteri di utilità di pianificazione personalizzata con agenti asincroni, vedere [procedura: creare agenti che i criteri dell'utilità di pianificazione specifici utilizzare](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente esegue due attività in parallelo. La prima attività calcola il valore n<sup>th</sup> numero di Fibonacci. La seconda attività Visualizza un indicatore di stato nella console.  
  
 La prima attività utilizza la scomposizione ricorsiva per calcolare il numero di Fibonacci. Ovvero, in modo ricorsivo ogni attività crea sottoattività per calcolare il risultato complessivo. Un'attività che utilizza la scomposizione ricorsiva potrebbe utilizzare tutte le risorse disponibili e pertanto privare altre attività. In questo esempio, l'attività che visualizza l'indicatore di stato potrebbe non ricevere accesso rapido alle risorse di elaborazione.  
  
 Per fornire all'attività che visualizza un corso messaggio equo l'accesso alle risorse di elaborazione, in questo esempio utilizza i passaggi descritti in [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza dell'utilità di pianificazione che dispone di un criterio personalizzato. Il criterio personalizzato specifica la priorità di thread per la classe di priorità più alta.  
  
 Questo esempio viene utilizzato il [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md) classi per stampare l'indicatore di stato. Queste classi dispongono di versioni dei costruttori che accettano un riferimento a un [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) oggetto che le pianifica. L'esempio Usa l'utilità di pianificazione predefinita per pianificare l'attività che calcola il numero di Fibonacci e l'istanza dell'utilità di pianificazione per pianificare l'attività che visualizza l'indicatore di stato.  
  
 Per illustrare i vantaggi dell'utilizzo dell'utilità di pianificazione che dispone di un criterio personalizzato, questo esempio viene eseguita l'attività complessiva due volte. Viene innanzitutto utilizzato l'utilità di pianificazione predefinita per pianificare entrambe le attività. Viene quindi utilizzata l'utilità di pianificazione predefinita per pianificare la prima attività e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare l'attività di secondo.  
  
 [!code-cpp[concrt-scheduler-policy#1](../../parallel/concrt/codesnippet/CPP/how-to-specify-specific-scheduler-policies_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Default scheduler:  
...........................................................................done  
Scheduler that has a custom policy:  
...........................................................................done  
```  
  
 Sebbene entrambi i set di attività producono lo stesso risultato, la versione che utilizza un criterio personalizzato consente all'attività che visualizza l'indicatore di stato per eseguire una priorità in modo da presentare un comportamento più rispondente.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `scheduler-policy.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc dell'utilità di pianificazione-Policy. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)   
 [Procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md)   
 [Procedura: creare agenti che utilizzano criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-create-agents-that-use-specific-scheduler-policies.md)

