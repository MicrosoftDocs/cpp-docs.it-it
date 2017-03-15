---
title: "Procedura: Creare agenti che usano criteri dell&#39;utilit&#224; di pianificazione specifici | Microsoft Docs"
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
  - "criteri dell'utilità di pianificazione, agenti [Runtime di concorrenza]"
  - "creazione di agenti che usano criteri specifici [Runtime di concorrenza]"
ms.assetid: 46a3e265-0777-4ec3-a142-967bafc49d67
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Procedura: Creare agenti che usano criteri dell&#39;utilit&#224; di pianificazione specifici
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un agente è un componente dell'applicazione che funziona in modo asincrono con gli altri componenti per risolvere le attività di elaborazione più grandi.  Un agente in genere ha un ciclo di vita stabilito e mantiene lo stato.  
  
 Ogni agente può avere requisiti dell'applicazione univoci.  Un agente che consente l'interazione dell'utente, recuperando l'input o visualizzando l'output, potrebbe, ad esempio, richiedere l'accesso alle risorse di elaborazione con priorità più alta.  I criteri dell'utilità di pianificazione consentono di controllare la strategia utilizzata dall'utilità di pianificazione quando vengono gestite le attività.  In questo argomento viene illustrato come creare agenti che utilizzano criteri dell'utilità di pianificazione specifici.  
  
 Per un esempio di base in cui vengono utilizzati insieme criteri dell'utilità di pianificazione personalizzati e blocchi dei messaggi asincroni, vedere [Procedura: Definire criteri dell'utilità di pianificazione specifici](../../parallel/concrt/how-to-specify-specific-scheduler-policies.md).  
  
 In questo argomento viene utilizzata la funzionalità della libreria di agenti asincroni, ad esempio agenti, blocchi dei messaggi e funzioni di passaggio dei messaggi, per eseguire il lavoro.  Per ulteriori informazioni sulla libreria di agenti asincroni, vedere [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).  
  
## Esempio  
 Nell'esempio seguente vengono definite due classi che derivano da [concurrency::agent](../../parallel/concrt/reference/agent-class.md): `permutor` e `printer`.  La classe `permutor` calcola tutte le permutazioni di una stringa di input specificata.  La classe `printer` visualizza i messaggi di stato sulla console.  La classe `permutor` esegue un'operazione più complessa dal punto di vista dell'elaborazione che potrebbe utilizzare tutte le risorse di elaborazione disponibili.  Per essere utile, la classe `printer` deve visualizzare ogni messaggio di stato in modo tempestivo.  
  
 Per consentire alla classe `printer` un accesso corretto alle risorse di elaborazione, in questo esempio vengono utilizzati i passaggi descritti in [Procedura: Gestire un'istanza dell'utilità di pianificazione](../../parallel/concrt/how-to-manage-a-scheduler-instance.md) per creare un'istanza dell'utilità di pianificazione con criteri personalizzati.  I criteri personalizzati specificano che per la priorità del thread deve essere utilizzata la classe con priorità più elevata.  
  
 Per illustrare i vantaggi dell'utilizzo di un'utilità di pianificazione con criteri personalizzati, in questo esempio l'attività complessiva viene eseguita due volte.  Nell'esempio viene innanzitutto utilizzata l'utilità di pianificazione predefinita per pianificare entrambe le attività.  Viene quindi utilizzata l'utilità di pianificazione predefinita per pianificare l'oggetto `permutor` e un'utilità di pianificazione con criteri personalizzati per pianificare l'oggetto `printer`.  
  
 [!code-cpp[concrt-permute-strings#1](../../parallel/concrt/codesnippet/CPP/how-to-create-agents-that-use-specific-scheduler-policies_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **With default scheduler:**  
**Computing all permutations of 'Grapefruit'...**  
**100% complete...**  
**With higher context priority:**  
**Computing all permutations of 'Grapefruit'...**  
**100% complete...** Sebbene entrambi i set di attività producano lo stesso risultato, la versione che utilizza i criteri personalizzati consente all'oggetto `printer` di essere eseguito con una priorità maggiore in modo da presentare un comportamento più rispondente.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `permute-strings.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc permute\-strings.cpp**  
  
## Vedere anche  
 [Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 