---
title: Il file di risorse (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- resource files
- resources [C++]
- file types [C++], resource files
ms.assetid: 338a4a0f-0c62-4ef1-a34f-5d86262d93a4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 097ae6d1486292d7dcc62dd4191e16f57e6f0a3c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-files-c"></a>File di risorse (C++)
Le risorse sono gli elementi dell'interfaccia che forniscono informazioni all'utente. Bitmap, icone, barre degli strumenti e i cursori sono tutte le risorse. Alcune risorse possono essere modificate per eseguire un'azione, ad esempio la selezione da un menu o l'immissione di dati nella finestra di dialogo.  
  
 Vedere [utilizzo delle risorse](../windows/working-with-resource-files.md) per ulteriori informazioni.  
  
|Nome file|Directory|Esplora soluzioni|Descrizione|  
|---------------|------------------------|--------------------------------|-----------------|  
|*NomeProgetto*RC|*NomeProgetto*|File di origine|File di script di risorsa per il progetto. Il file di script di risorsa contiene i seguenti, a seconda del tipo di progetto e il supporto selezionato per il progetto (ad esempio, le barre degli strumenti, finestre di dialogo o HTML):<br /><br /> -Definizione di menu default.<br />-Tabelle di stringhe e tasti di scelta rapida<br />-Il valore predefinito **su** la finestra di dialogo.<br />-Altre finestre di dialogo.<br />-File icona (res\\*Projname*. ico).<br />-Informazioni sulla versione.<br />-Bitmap.<br />-Barra degli strumenti.<br />-File HTML.<br /><br /> Il file di risorse include il file AFXRES. per le risorse standard di Microsoft Foundation Class.|  
|Resource.h|*NomeProgetto*|File di intestazione|Il file di intestazione di risorse che include le definizioni per le risorse utilizzate dal progetto.|  
|*NomeProgetto*RC2|*NomeProgetto*\res|File di origine|Il file di script contenente risorse aggiuntive utilizzate dal progetto. È possibile includere il file RC2 all'inizio del file RC del progetto.<br /><br /> Un file RC2 è utile per includere le risorse usate da progetti diversi. Anziché creare le stesse risorse più volte per progetti diversi, è possibile inserirli in un file RC2 e includere il file RC2 nel file RC principale.|  
|*NomeProgetto*. def|*NomeProgetto*|File di origine|File di definizione del modulo per un progetto DLL. Per un controllo, fornisce il nome e descrizione del controllo, nonché le dimensioni dell'heap di runtime.|  
|*NomeProgetto*ico|*NomeProgetto*\res|File di risorse|Il file dell'icona per il progetto o un controllo. Questa icona viene visualizzata quando l'applicazione è ridotta a icona. Viene usato anche dell'applicazione **su** casella. Per impostazione predefinita, MFC fornisce l'icona MFC e ATL fornisce l'icona ATL.|  
|*NomeProgetto*doc. ico|*NomeProgetto*\res|File di risorse|Il file dell'icona per un progetto MFC che include il supporto per l'architettura documento/visualizzazione.|  
|ToolBar.bmp|*NomeProgetto*\res|File di risorse|Il file di mappa di bit che rappresenta l'applicazione o il controllo in una barra degli strumenti o una tavolozza. Questa bitmap è incluso nel file di risorse del progetto. La barra degli strumenti iniziale e una barra di stato vengono costruiti nel **CMainFrame** classe.|  
|Ribbon.mfcribbon ms|*NomeProgetto*\res|File di risorse|Il file di risorse che contiene il codice XML che definisce i pulsanti, controlli e gli attributi della barra multifunzione. Per altre informazioni, vedere [Ribbon Designer (MFC)](../mfc/ribbon-designer-mfc.md).|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)