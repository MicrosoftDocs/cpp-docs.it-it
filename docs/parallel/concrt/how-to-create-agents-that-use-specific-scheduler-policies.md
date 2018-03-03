---
title: "Procedura: creare agenti che utilizzano criteri dell'utilità di pianificazione specifici | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- scheduler policies, agents [Concurrency Runtime]
- creating agents that use specific policies [Concurrency Runtime]
ms.assetid: 46a3e265-0777-4ec3-a142-967bafc49d67
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d465b39e00bee0911fb5b04bbe60af68e1f296c5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-create-agents-that-use-specific-scheduler-policies"></a>Procedura: Creare agenti che usano criteri dell'utilità di pianificazione specifici
Un agente è un componente dell'applicazione che funziona in modo asincrono con altri componenti per risolvere le attività di elaborazione maggiori. In genere, un agente è un ciclo di vita stabilito e mantiene lo stato.  
  
 Ogni agente può avere requisiti dell'applicazione univoco. Ad esempio, un agente che consente l'interazione dell'utente (recupero input o la visualizzazione di output) potrebbe richiedere l'accesso di priorità superiore alle risorse di elaborazione. Criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata l'utilità di pianificazione quando gestisce le attività. In questo argomento viene illustrato come creare agenti che utilizzano criteri dell'utilità di pianificazione specifiche.  
  
 Per un esempio di base che utilizza criteri di utilità di pianificazione personalizzata con blocchi di messaggi asincroni, vedere [procedura: specificare criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).  
  
 In questo argomento utilizza funzionalità dalla libreria di agenti asincroni, ad esempio gli agenti, blocchi dei messaggi e funzioni di passaggio dei messaggi, per eseguire il lavoro. Per ulteriori informazioni sulla libreria di agenti asincroni, vedere [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente definisce due classi che derivano da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md): `permutor` e `printer`. La `permutor` classe calcola tutte le permutazioni di una determinata stringa di input. La `printer` classe stampa i messaggi di stato nella console. La `permutor` classe esegue un'operazione complesse, che potrebbe utilizzare tutte le risorse di elaborazione disponibili. Per essere utile, il `printer` classe deve visualizzare ogni messaggio di stato di avanzamento in modo tempestivo.  
  
 Per fornire il `printer` classe un accesso corretto alle risorse di elaborazione, in questo esempio utilizza i passaggi descritti in [procedura: gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza di utilità di pianificazione che dispone di un criterio personalizzato. Il criterio personalizzato specifica la priorità di thread per la classe di priorità più alta.  
  
 Per illustrare i vantaggi dell'utilizzo dell'utilità di pianificazione che dispone di un criterio personalizzato, questo esempio viene eseguita due volte l'intera attività. Viene innanzitutto utilizzato l'utilità di pianificazione predefinita per entrambe le attività di pianificazione. Viene quindi utilizzata l'utilità di pianificazione predefinita per pianificare il `permutor` oggetto e un'utilità di pianificazione che dispone di un criterio personalizzato per pianificare il `printer` oggetto.  
  
 [!code-cpp[concrt-permute-strings#1](../../parallel/concrt/codesnippet/cpp/how-to-create-agents-that-use-specific-scheduler-policies_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
With default scheduler:  
Computing all permutations of 'Grapefruit'...  
100% complete...  
 
With higher context priority:  
Computing all permutations of 'Grapefruit'...  
100% complete...  
```  
  
 Sebbene entrambi i set di attività producono lo stesso risultato, la versione che utilizza un criterio personalizzato consente di `printer` oggetto da eseguire con una priorità con privilegi elevata in modo che si comporta più rispondente.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `permute-strings.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc permute-strings. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 

