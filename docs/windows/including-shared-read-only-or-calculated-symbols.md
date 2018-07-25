---
title: Tra cui condivisi (di sola lettura) o simboli calcolati | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.symbol.shared.calculated
dev_langs:
- C++
helpviewer_keywords:
- symbols, read-only
- symbols, shared
- symbols, calculated
- read-only symbols
- symbol directives
- calculated symbols
- shared symbols
ms.assetid: 32b77faf-a066-4371-a072-9a5b84c0766d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c56e8af65d27bda8ef04655f40bdd2e335067d3c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879227"
---
# <a name="including-shared-read-only-or-calculated-symbols"></a>Inclusione di simboli condivisi (in sola lettura) o calcolati
La prima volta che l'ambiente di sviluppo legge un file di risorse creato da un'altra applicazione, contrassegna tutto, inclusi i file di intestazione, come di sola lettura. Successivamente, è possibile utilizzare il [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md) per aggiungere file di intestazione simboli di sola lettura aggiuntivi.  
  
 Un motivo per cui è possibile voler usare le definizioni dei simboli di sola lettura è per i file di simboli che si intende condividere tra più progetti.  
  
 Inoltre, è possibile usare file di simboli inclusi quando si dispone di risorse esistenti con le definizioni dei simboli che usano espressioni anziché semplici numeri interi per definire il valore di simbolo. Ad esempio:  
  
```  
#define   IDC_CONTROL1 2100  
#define   IDC_CONTROL2 (IDC_CONTROL1+1)  
```  
  
 L'ambiente interpreterà correttamente questi simboli calcolati purché:  
  
-   I simboli calcolati siano inseriti in un file di simboli di sola lettura.  
  
-   Il file di risorse contenga risorse a cui sono già stati assegnati questi simboli calcolati.  
  
-   È prevista un'espressione numerica.  
  
> [!NOTE]
>  Se è prevista una stringa o un'espressione numerica, l'espressione non è valutata.  
  
### <a name="to-include-shared-read-only-symbols-in-your-resource-file"></a>Per includere simboli condivisi (di sola lettura) nel file di risorse  
  
1.  In [visualizzazione risorse](../windows/resource-view-window.md)destro del mouse sul file RC e scegliere [Inclusioni risorsa](../windows/resource-includes-dialog-box.md) dal menu di scelta rapida.  
  
    > [!NOTE]
    >  Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).  
  
2.  Nel **direttive per simboli in sola lettura** , utilizzare il **#include** direttiva del compilatore per specificare il file in cui si desidera i simboli di sola lettura da mantenere.  
  
     Non chiamare il file Resource.h, poiché questo è il nome file in genere usato dal file di intestazione simboli principale.  
  
    > [!NOTE]
    >  **Importante** il testo digitato nella casella direttive simboli di sola lettura viene incluso nel file di risorse esattamente come si digita. Verificare che il tipo non contenga errori di ortografia o di sintassi.  
  
     Utilizzare il **direttive per simboli in sola lettura** casella per includere i file con solo le definizioni dei simboli. Non includere definizioni di risorse, altrimenti, verranno create definizioni di risorse duplicate quando viene salvato il file.  
  
3.  Inserire i simboli nel file specificato.  
  
     I simboli nei file inseriti in questo modo vengono valutati ogni volta che si apre il file di risorse, ma non vengono sostituiti sul disco quando si salva il file.  
  
4.  Fare clic su **OK**.  
  

  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Restrizioni relative ai nomi di simbolo](../windows/symbol-name-restrictions.md)   
 [Restrizioni relative ai valori di simboli](../windows/symbol-value-restrictions.md)   
 [ID simbolo predefiniti](../windows/predefined-symbol-ids.md)   
 [Simboli: identificatori di risorsa](../windows/symbols-resource-identifiers.md)