---
title: 'Simboli: Identificatori di risorsa | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.identifiers
dev_langs:
- C++
helpviewer_keywords:
- symbols, resource identifiers
- symbols, creating
- resource symbols
- symbols, editing
- resource editors, resource symbols
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c049aa192aeb253641ab473e5675b1ee5bd685a6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891844"
---
# <a name="symbols-resource-identifiers"></a>Simboli: identificatori di risorsa
Un simbolo è un identificatore (ID) di risorsa costituito da due parti: una stringa di testo (nome del simbolo) di cui viene eseguito il mapping a un valore integer (valore del simbolo). Ad esempio:  
  
```  
IDC_EDITNAME = 5100  
```  
  
 Molto spesso i nomi dei simboli sono denominati identificatori.  
  
 I simboli offrono un modo descrittivo per fare riferimento alle risorse e agli oggetti dell'interfaccia utente sia nel codice sorgente che durante l'uso negli editor di risorse. I simboli possono essere visualizzati e modificati facilmente mediante la [finestra di dialogo Simboli risorsa](../windows/viewing-resource-symbols.md).  
  
 Quando si crea una nuova risorsa o un nuovo oggetto risorsa, gli [editor di risorse](../windows/resource-editors.md) forniscono alla risorsa un nome predefinito, ad esempio `IDC_RADIO1`, e le assegnano un valore. La definizione, costituita dal nome e dal valore, viene archiviata nel file Resource.h.  
  
> [!NOTE]
>  Quando si copiano risorse o oggetti risorsa da un file RC a un altro, Visual C++ potrebbe modificare il valore del simbolo della risorsa trasferita o il nome e il valore del simbolo, allo scopo di evitare conflitti con i nomi o i valori dei simboli nel file esistente.  
  
 Il numero di risorse e simboli è direttamente proporzionale alle dimensioni e al livello di complessità dell'applicazione. Può quindi risultare difficile tenere traccia di un numero elevato di simboli distribuiti in diversi file. La finestra di dialogo [Simboli risorsa](../windows/resource-symbols-dialog-box.md) semplifica la gestione dei simboli offrendo uno strumento centrale che consente di:  
  
- [Visualizzare i simboli risorsa](../windows/viewing-resource-symbols.md)  
  
- [Creare nuovi simboli](../windows/creating-new-symbols.md)  
  
- [Modificare i simboli non assegnati](../windows/changing-unassigned-symbols.md)  
  
- [Eliminare i simboli non assegnati](../windows/deleting-unassigned-symbols.md)  
  
- [Aprire l'editor di risorse per un determinato simbolo](../windows/opening-the-resource-editor-for-a-given-symbol.md)  
  
- [Modificare un simbolo o il nome di un simbolo (ID)](../windows/changing-a-symbol-or-symbol-name-id.md)  
  
- [Modificare il valore numerico di un simbolo](../windows/changing-a-symbol-s-numeric-value.md)  
  
- [Modificare i nomi nei file di intestazione simboli](../windows/changing-the-names-of-symbol-header-files.md)  
  
- [Includere simboli condivisi (di sola lettura) o calcolati](../windows/including-shared-read-only-or-calculated-symbols.md)  
  
- [Visualizzare gli ID simbolo predefiniti](../windows/predefined-symbol-ids.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: cercare simboli nelle risorse](../windows/how-to-search-for-symbols-in-resources.md)   
 [Editor risorse](../windows/resource-editors.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)

