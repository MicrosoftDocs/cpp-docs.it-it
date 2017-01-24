---
title: "Adding Controls to a Dialog Causes the Dialog to No Longer Function | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "controls [C++], troubleshooting"
  - "common controls, troubleshooting"
  - "troubleshooting controls"
  - "dialog boxes, troubleshooting"
  - "dialog box controls, troubleshooting"
  - "InitCommonControls"
ms.assetid: b2dd4574-ea59-4343-8d65-b387cead5da6
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Adding Controls to a Dialog Causes the Dialog to No Longer Function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo l'aggiunta di un controllo comune o di un controllo Rich Edit a una finestra di dialogo, il controllo o la stessa finestra di dialogo non viene visualizzata durante la verifica della finestra di dialogo.  
  
 **Esempio del problema**  
  
1.  Creare un progetto Win32 modificando le impostazioni dell'applicazione in modo da creare un'applicazione Windows anziché un'applicazione console.  
  
2.  In [Visualizzazione risorse](../windows/resource-view-window.md) fare doppio clic sul file RC.  
  
3.  In corrispondenza dell'opzione relativa alla finestra di dialogo, fare doppio clic sulla finestra **Informazioni su**.  
  
4.  Aggiungere un **IP Address Control** alla finestra di dialogo.  
  
5.  Salvare e scegliere **Ricompila tutto**.  
  
6.  Eseguire il programma.  
  
7.  Scegliere **Informazioni su** dal menu **?** della finestra di dialogo. Non verrà visualizzata alcuna finestra.  
  
 **Causa**  
  
 Quando si trascinano in una finestra di dialogo i controlli comuni riportati di seguito o Rich Edit, non viene aggiunto automaticamente codice al progetto.  Quando si verifica questo problema, inoltre, non vengono generati errori o avvisi.  È quindi necessario aggiungere manualmente il codice per il controllo.  
  
||||  
|-|-|-|  
|Dispositivo di scorrimento|Controllo struttura ad albero|Selezione data e ora|  
|Casella di selezione|Controllo struttura a schede|Calendario mensile|  
|Controllo stato|Controllo animazione|Controllo indirizzo IP|  
|Tasto di scelta|Controllo Rich Edit|Casella combinata estesa|  
|Controllo elenco|Controllo Rich Edit 2.0|Controllo personalizzato|  
  
## Risoluzione per i controlli comuni  
 Per utilizzare controlli comuni in una finestra di dialogo, è necessario chiamare [InitCommonControlsEx](http://msdn.microsoft.com/library/windows/desktop/bb775697) o **AFXInitCommonControls** prima di creare la finestra di dialogo.  
  
## Risoluzione per i controlli Rich Edit  
 Per i controlli Rich Edit è necessario chiamare **LoadLibrary**.  Per ulteriori informazioni, vedere [Utilizzo del controllo RichEdit 1.0 con MFC](../mfc/using-the-richedit-1-0-control-with-mfc.md), [Informazioni sui controlli Rich Edit](http://msdn.microsoft.com/library/windows/desktop/bb787873) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] e [Cenni preliminari sul controllo Rich Edit](../mfc/overview-of-the-rich-edit-control.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Troubleshooting the Dialog Editor](../mfc/troubleshooting-the-dialog-editor.md)   
 [Dialog Editor](../mfc/dialog-editor.md)