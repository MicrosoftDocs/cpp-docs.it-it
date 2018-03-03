---
title: Errore irreversibile del compilatore di risorse RC1015 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- RC1015
dev_langs:
- C++
helpviewer_keywords:
- RC1015
ms.assetid: 23f187e1-5538-40b5-9042-edd2888f55c2
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 666221cf5c3e812cd856271ea97cf4966383ec20
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resource-compiler-fatal-error-rc1015"></a>Errore irreversibile del compilatore di risorse RC1015
Impossibile aprire il file 'nomefile' inclusione  
  
 Il file di inclusione specificato non esiste, non è stato possibile aprire o non è stato trovato.  
  
 Verificare che le impostazioni dell'ambiente siano valide e che il percorso del file specificato sia corretto. Verificare che siano disponibili per il compilatore di risorse sufficienti gli handle di file. Se il file si trova in un'unità di rete, assicurarsi di disporre di autorizzazioni per aprire il file.  
  
 L'errore RC1015 può verificarsi anche se il file di inclusione è presente in una directory specificata come directory di inclusione aggiuntiva nella pagina delle proprietà visualizzata selezionando Proprietà di configurazione -> Risorse -> Generale. Specificare il percorso completo del fila di inclusione.  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base Q326987: RC1015 errore quando tramite risorse Visualizza se il percorso di inclusione è troppo lungo.