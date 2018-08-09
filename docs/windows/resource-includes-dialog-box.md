---
title: Finestra di dialogo Inclusioni risorsa | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d11f3abdaa4f804f9916e7313d1a4338c29a7369
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015079"
---
# <a name="resource-includes-dialog-box"></a>Inclusioni risorsa (finestra di dialogo)
È possibile usare la **Inclusioni risorsa** finestra di dialogo per modificare la disposizione dell'ambiente normale utilizzo di tutte le risorse vengono archiviate nel file RC del progetto e tutte le [simboli](../windows/symbols-resource-identifiers.md) in Resource. h.  
  
 Per aprire la **Inclusioni risorsa** file nella finestra di dialogo scelta un' RC [visualizzazione risorse](../windows/resource-view-window.md), quindi scegliere **Inclusioni risorsa** dal menu di scelta rapida.  
  
 **File di intestazione simboli**  
 Consente di modificare il nome del file di intestazione in cui vengono archiviate le definizioni dei simboli per il file di risorse. Per altre informazioni, vedere [modifica i nomi dei file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md).  
  
 **Direttive per simboli di sola lettura**  
 Consente di includere file di intestazione contenenti simboli che è necessario non modificare durante una sessione di modifica. È, ad esempio, possibile includere un file di simboli condiviso da più progetti. È anche possibile includere file H di MFC. Per altre informazioni, vedere [simboli inclusi condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md).  
  
 **Direttive in fase di compilazione**  
 Consente di includere file di risorse creati e modificati separatamente dalle risorse nel file di risorse principale, che contengono direttive in fase di compilazione (quali quelle che includono risorse in modo condizionale) o risorse in un formato personalizzato. È anche possibile usare la **casella direttive in fase di compilazione** per includere i file di risorse MFC standard. Per altre informazioni, vedere [tra cui le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
> [!NOTE]
>  Visualizzazione delle voci in queste caselle di testo nel file RC contrassegnato da `TEXTINCLUDE 1`, `TEXTINCLUDE 2`, e `TEXTINCLUDE 3` rispettivamente. Per altre informazioni, vedere [TN035: utilizzo di più file di risorse e i file di intestazione Visual c++](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md).  
  
 Dopo aver apportato le modifiche apportate al file di risorse usando il **Inclusioni risorsa** finestra di dialogo, è necessario chiudere il file con estensione RC e quindi riaprirlo rendere effettive le modifiche. Per altre informazioni, vedere [tra cui le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: specificare directory di inclusione per risorse](../windows/how-to-specify-include-directories-for-resources.md)   
 [Simboli: Identificatori di risorsa](../windows/symbols-resource-identifiers.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)