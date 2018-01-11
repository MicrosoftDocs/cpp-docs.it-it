---
title: "Aggiunta di controlli a una finestra di dialogo comporta la funzione non è più la finestra di dialogo | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- controls [C++], troubleshooting
- common controls, troubleshooting
- troubleshooting controls
- dialog boxes, troubleshooting
- dialog box controls, troubleshooting
- InitCommonControls
ms.assetid: b2dd4574-ea59-4343-8d65-b387cead5da6
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d0ec4825419c7a9d3c9bc35151b84c327a03325b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="adding-controls-to-a-dialog-causes-the-dialog-to-no-longer-function"></a>Funzionamento non corretto di una finestra di dialogo in seguito all'aggiunta di controlli
Dopo aver aggiunto un controllo comune o un controllo rich edit in una finestra di dialogo, non verrà visualizzata quando si testa la finestra di dialogo o non verrà visualizzata la finestra di dialogo.  
  
 **Esempio del problema**  
  
1.  Creare un progetto Win32, modificare le impostazioni dell'applicazione in modo da creare un'applicazione Windows (non un'applicazione console).  
  
2.  In [visualizzazione risorse](../windows/resource-view-window.md), fare doppio clic sul file RC.  
  
3.  L'opzione della finestra di dialogo, fare doppio clic il **su** casella.  
  
4.  Aggiungere un **controllo indirizzo IP** nella finestra di dialogo.  
  
5.  Salvare e **Ricompila tutto**.  
  
6.  Eseguire il programma.  
  
7.  Nella finestra di dialogo **Guida** dal menu fare clic sul **su** comando; nessuna finestra di dialogo viene visualizzata.  
  
 **La causa**  
  
 Attualmente, l'editor della finestra di dialogo aggiunge automaticamente codice al progetto quando si trascina i controlli comuni seguenti o rich edit (controlli) in una finestra di dialogo. Né Visual Studio fornisce un errore o un avviso quando si verifica questo problema. È necessario aggiungere manualmente il codice per il controllo.  
  
||||  
|-|-|-|  
|Dispositivo di scorrimento|Controllo struttura ad albero|Selezione data e ora|  
|Controllo di selezione|Controllo struttura a schede|Calendario mensile|  
|Controllo dello stato|Controllo Animation|Controllo indirizzo IP|  
|Tasto di scelta rapida|Controllo Rich Edit|Casella combinata estesa|  
|Controllo elenco|Controllo Rich Edit 2.0|Controllo personalizzato|  
  
## <a name="the-fix-for-common-controls"></a>La correzione per i controlli comuni  
 Per utilizzare i controlli comuni in una finestra di dialogo, è necessario chiamare [InitCommonControlsEx](http://msdn.microsoft.com/library/windows/desktop/bb775697) o **AFXInitCommonControls** prima di creare la finestra di dialogo.  
  
## <a name="the-fix-for-richedit-controls"></a>La correzione per i controlli RichEdit  
 È necessario chiamare **LoadLibrary** per controlli rich edit. Per ulteriori informazioni, vedere [utilizzo del controllo RichEdit 1.0 con MFC](../windows/using-the-richedit-1-0-control-with-mfc.md), [sui controlli Rich Edit](http://msdn.microsoft.com/library/windows/desktop/bb787873) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)], e [Panoramica del controllo Rich Edit](../mfc/overview-of-the-rich-edit-control.md).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Risoluzione dei problemi relativi all'Editor finestre](../windows/troubleshooting-the-dialog-editor.md)   
 [Editor finestre](../windows/dialog-editor.md)

