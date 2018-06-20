---
title: File interessati dalla modifica delle risorse | Documenti Microsoft
ms.custom: ''
ms.date: 06/18/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- resource editing
- resources [Visual Studio], editing
ms.assetid: d0820df1-ba84-40ac-bce9-29ea5ee7e3f8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b165dca13e30e12e1a4fdc85056920b7c10ee586
ms.sourcegitcommit: d06966efce25c0e66286c8047726ffe743ea6be0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/19/2018
ms.locfileid: "36238656"
---
# <a name="files-affected-by-resource-editing"></a>File interessati dalla modifica delle risorse
L'ambiente di Visual Studio funziona con i file illustrati nella tabella seguente durante la sessione di modifica delle risorse.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|Resource.h|File di intestazione generato dall'ambiente di sviluppo; contiene le definizioni dei simboli. (Il file incluso nel controllo del codice sorgente.)|  
|Nomefile.aps|Versione binaria del file di script di risorsa corrente; usato per il caricamento rapido.<br /><br /> Gli editor di risorse non leggono direttamente i file RC o resource.h. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md). (In genere, è consigliabile non includere il file APS non nel controllo del codice sorgente.)|  
|RC|File di script di risorsa che contiene lo script per le risorse nel progetto corrente. Questo file viene sovrascritto dal file APS ogni volta che si salva. (Il file incluso nel controllo del codice sorgente.)|  
  

  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [File di risorse](../windows/resource-files-visual-studio.md)