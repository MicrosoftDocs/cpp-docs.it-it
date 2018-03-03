---
title: -WHOLEARCHIVE (che includono tutti i file oggetto libreria) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: ee92d12f-18af-4602-9683-d6223be62ac9
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3499d6583c7d9801aa4c3b12c66196c975b192ea
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="wholearchive-include-all-library-object-files"></a>/ WHOLEARCHIVE (che includono tutti i file oggetto libreria)
Impone al linker di includere tutti i file oggetto della libreria statica nel file eseguibile collegato.  
  
## <a name="syntax"></a>Sintassi  
  
> / WHOLEARCHIVE [:*libreria*]  
  
## <a name="remarks"></a>Note  
  
L'opzione /WHOLEARCHIVE impone al linker di includere tutti i file dall'oggetto una libreria statica specificata o se non viene specificata alcuna libreria, da tutte le librerie statiche specificate al collegamento di comandi. Per specificare l'opzione /WHOLEARCHIVE per più raccolte, è possibile utilizzare più di uno switch /WHOLEARCHIVE nella riga di comando del linker. Per impostazione predefinita, il linker include i file oggetto nell'output collegato solo se si Esporta simboli a cui fa riferimento da altri file oggetto nel file eseguibile. L'opzione /WHOLEARCHIVE rende il linker considera tutti i file oggetto archiviati in una libreria statica come se sono stati specificati singolarmente nella riga di comando del linker.  
  
Per esportare nuovamente tutti i simboli da una libreria statica, è possibile utilizzare l'opzione /WHOLEARCHIVE. Ciò permette di assicurarsi che tutto il codice di libreria, risorse e i metadati sono inclusi quando si crea un componente da più di una libreria statica. Se viene visualizzato l'avviso LNK4264 quando si crea una libreria statica che contiene i componenti Windows Runtime per l'esportazione, utilizzare l'opzione /WHOLEARCHIVE durante il collegamento della raccolta in un altro componente o app.  
  
L'opzione /WHOLEARCHIVE è stata introdotta in Visual Studio 2015 Update 2.  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
1.  Selezionare il **riga di comando** pagina delle proprietà in **le proprietà di configurazione**, **Linker**.  
  
1.  Aggiungere l'opzione /WHOLEARCHIVE il **opzioni aggiuntive** casella di testo.  
  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)