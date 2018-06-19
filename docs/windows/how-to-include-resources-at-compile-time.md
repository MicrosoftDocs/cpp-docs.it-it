---
title: 'Procedura: includere risorse in fase di compilazione | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vs.resvw.resource.including
- vc.resvw.resource.including
dev_langs:
- C++
helpviewer_keywords:
- compiling source code, including resources
- comments [C++], compiled files
- resources [Visual Studio], including at compile time
- projects [C++], including resources
- '#include directive'
- include directive (#include)
ms.assetid: 357e93c2-0a29-42f9-806f-882f688b8924
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 765d78ef5371015fdce3e505e7a2454c29c6c97e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880151"
---
# <a name="how-to-include-resources-at-compile-time"></a>Procedura: includere risorse in fase di compilazione
In genere è facile e comodo usare la disposizione predefinita di tutte le risorse in un file di script (RC) delle risorse. Tuttavia, è possibile aggiungere risorse in altri file al progetto corrente in fase di compilazione elencandoli nella **direttive in fase di compilazione** casella il [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md).  
  
 Vi sono vari motivi per inserire le risorse in un file diverso dal file RC principale:  
  
-   Per aggiungere commenti alle istruzioni di risorse che non verranno eliminate quando si salva il file RC.  
  
     Gli editor di risorse non leggono direttamente i file RC o resource.h. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non risulta sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e il file resource.h). Eventuali modifiche alle risorse resteranno incorporate nel file RC, ma i commenti andranno sempre persi quando il file RC viene sovrascritto.  
  
-   Per includere risorse già sviluppate e testate e che non richiedono altre modifiche. Eventuali file inclusi, ma che non hanno estensione RC non saranno modificati dagli editor di risorse.  
  
-   Per includere risorse usate da progetti diversi o che fanno parte di un sistema di controllo della versione del codice sorgente e pertanto devono essere in una posizione centrale in cui le modifiche influiranno su tutti i progetti.  
  
-   Per includere risorse (ad esempio, risorse RCDATA) che sono in un formato personalizzato. Le risorse RCDATA possono avere requisiti speciali. Ad esempio, è possibile usare un'espressione come valore per il campo nameID. Per altre informazioni, vedere la documentazione di [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 Se si dispone di sezioni nel file RC esistenti che soddisfano una di queste condizioni, è necessario inserire le sezioni in uno o più file RC separati e includerli nel progetto usando il [finestra di dialogo Inclusioni risorsa](../windows/resource-includes-dialog-box.md). Il *Projectname*file RC2 creato nella sottodirectory \res di un nuovo progetto viene utilizzato per questo scopo.  
  
### <a name="to-include-resources-in-your-project-at-compile-time"></a>Per includere risorse nel progetto in fase di compilazione  
  
1.  Inserire le risorse in un file script di risorsa con un nome file univoco. Non utilizzare *projectname*. rc, poiché si tratta del nome di file utilizzato per il file di script di risorse principale.  
  
2.  Fare doppio clic sul file RC (in [visualizzazione risorse](../windows/resource-view-window.md)) e scegliere **Inclusioni risorsa** dal menu di scelta rapida.  
  
3.  Nel **direttive in fase di compilazione** , aggiungere il [#include](../preprocessor/hash-include-directive-c-cpp.md) direttiva del compilatore per includere il nuovo file di risorse nel file di risorse principale nell'ambiente di sviluppo.  
  
     Le risorse nei file incluse in questo modo diventano parte del file eseguibile in fase di compilazione. Non sono direttamente disponibili per la modifica quando si lavora sul file RC principale del progetto. È necessario aprire i file RC inclusi separatamente. Eventuali file inclusi, ma che non hanno estensione RC non saranno modificabili da parte degli editor di risorse.  
  

  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor di risorse](../windows/resource-editors.md)