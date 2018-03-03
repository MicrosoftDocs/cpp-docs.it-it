---
title: Sintassi della riga di comando del linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- linker [C++], syntax
- linker command line [C++]
- LINK tool [C++], command-line syntax
ms.assetid: e2a31e17-77bd-4e74-9305-75b105b26539
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ce42aa031b91d5a4ec21ed14ac7cb47643e1325
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-command-line-syntax"></a>Sintassi della riga di comando del linker
Per eseguire il collegamento. EXE, utilizzare la sintassi seguente:  
  
```  
LINK arguments  
```  
  
 Il `arguments` includere opzioni e nomi di file e può essere specificato in qualsiasi ordine. Le opzioni vengono elaborate prima, quindi i file. Utilizzare uno o più spazi o tabulazioni per separare gli argomenti.  
  
> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.  
  
 Riga di comando un'opzione è costituito da un identificatore di opzione, un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi delle opzioni non possono essere abbreviati. Alcune opzioni accettano un argomento, dopo i due punti (:) specificato. Spazi o tabulazioni non sono consentiti all'interno di una specifica opzione, ad eccezione all'interno di una stringa tra virgolette nell'opzione /COMMENT. Specificare gli argomenti numerici nella notazione decimale o in linguaggio C. I nomi delle opzioni e i corrispondenti argomenti parola chiave o nome file non sono tra maiuscole e minuscole, ma gli identificatori come argomenti tra maiuscole e minuscole.  
  
 Per passare un file al linker, specificare il nome del file nella riga di comando dopo il comando di collegamento. È possibile specificare un percorso relativo o assoluto con il nome del file e, è possibile utilizzare caratteri jolly nel nome file. Se si omette il punto (.) e l'estensione del nome file, obj ricerca del file. COLLEGAMENTO non utilizza estensioni di file o la mancata per presupporre il contenuto di file; Determina il tipo di file, esaminare ed elabora di conseguenza.  
  
 Link.exe restituisce zero per l'esito positivo (nessun errore).  In caso contrario, il linker restituisce il numero di errore che è stato arrestato il collegamento.  Se, ad esempio, il linker genera l'errore LNK1104, il linker restituisce 1104.  Di conseguenza, il numero minimo di errore restituito in caso di errore dal linker è 1000.  Valore restituito pari a 128 rappresenta un problema di configurazione con il sistema operativo o un file con estensione config. il caricatore non è stato caricato link.exe o c2.dll.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)