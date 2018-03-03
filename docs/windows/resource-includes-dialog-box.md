---
title: La finestra di dialogo Inclusioni risorsa | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.editors.resourceincludes
dev_langs:
- C++
helpviewer_keywords:
- Resource Includes dialog box
- rc files, changing storage
- symbol header files, changing
- compiling source code, including resources
- .rc files, changing storage
- symbol header files, read-only
- symbols, symbol header files
ms.assetid: 659a54e6-e416-4045-8411-798730ff4ce3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 610e970ad84c6c89d91182b7a61bb759112fcd7d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-includes-dialog-box"></a>Inclusioni risorsa (finestra di dialogo)
È possibile utilizzare il **Inclusioni risorsa** la finestra di dialogo per modificare la disposizione dell'ambiente normale utilizzo di tutte le risorse di archiviazione nel file RC del progetto e tutti i [simboli](../windows/symbols-resource-identifiers.md) in Resource. h.  
  
 Per aprire la **Inclusioni risorsa** rapida un RC nella finestra di dialogo file in [visualizzazione risorse](../windows/resource-view-window.md), quindi scegliere **Inclusioni risorsa** dal menu di scelta rapida.  
  
 **File di intestazione simboli**  
 Consente di modificare il nome del file di intestazione in cui vengono archiviate le definizioni dei simboli per il file di risorse. Per ulteriori informazioni, vedere [la modifica dei nomi di file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md).  
  
 **Direttive per simboli in sola lettura**  
 Consente di includere file di intestazione contenenti simboli che è necessario non modificare durante una sessione di modifica. È, ad esempio, possibile includere un file di simboli condiviso da più progetti. È anche possibile includere file H di MFC. Per ulteriori informazioni, vedere [simboli inclusi condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).  
  
 **Direttive in fase di compilazione**  
 Consente di includere file di risorse creati e modificati separatamente dalle risorse nel file di risorse principale, che contengono direttive in fase di compilazione (quali quelle che includono risorse in modo condizionale) o risorse in un formato personalizzato. È possibile usare la casella Direttive in fase di compilazione anche per includere file di risorse MFC standard. Per ulteriori informazioni, vedere [inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
> [!NOTE]
>  Voci di queste caselle di testo vengono visualizzate nel file RC contrassegnato da `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, e `TEXTINCLUDE 3` rispettivamente. Per ulteriori informazioni, vedere [TN035: utilizzo di più file di risorse e i file di intestazione con Visual C++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).  
  
 Dopo aver apportato le modifiche apportate al file di risorse utilizzando il **Inclusioni risorsa** la finestra di dialogo, è necessario chiudere il file RC e riaprirlo rendere effettive le modifiche. Per ulteriori informazioni, vedere [inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  

  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: specificare directory di inclusione per risorse](../windows/how-to-specify-include-directories-for-resources.md)   
 [Simboli: Identificatori di risorsa](../windows/symbols-resource-identifiers.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)