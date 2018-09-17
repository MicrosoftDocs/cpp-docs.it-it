---
title: Sintassi della riga di comando del linker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- linker [C++], syntax
- linker command line [C++]
- LINK tool [C++], command-line syntax
ms.assetid: e2a31e17-77bd-4e74-9305-75b105b26539
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5f1e891d91b96c5f29fb01dae5b1b8b9d731cdf3
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718336"
---
# <a name="linker-command-line-syntax"></a>Sintassi della riga di comando del linker

Per eseguire il collegamento. EXE, usare la sintassi del comando seguente:

```
LINK arguments
```

Il `arguments` includono opzioni e nomi di file e può essere specificato in qualsiasi ordine. Le opzioni vengono elaborate prima, quindi i file. Usare uno o più spazi o tabulazioni per separare gli argomenti.

> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di Visual Studio. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.

Nella riga di comando, un'opzione è costituito da un identificatore di opzione, un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni di accettano un argomento, dopo i due punti (:) specificato. Spazi o tabulazioni non sono consentite all'interno di una specifica opzione, ad eccezione all'interno di una stringa tra virgolette nell'opzione /COMMENT. Specificare gli argomenti numerici nella notazione decimale o del linguaggio C. I nomi e i relativi argomenti parola chiave o un nome file non sono tra maiuscole e minuscole, ma gli identificatori come argomenti sono tra maiuscole e minuscole.

Per passare un file del linker, specificare il nome del file nella riga di comando dopo il comando di collegamento. È possibile specificare un percorso relativo o assoluto con il nome del file e si possono usare caratteri jolly nel nome file. Se si omette il punto (.) e l'estensione del nome file, viene presupposto obj allo scopo di trovare il file. COLLEGAMENTO non utilizza estensioni di file o la mancanza di essi per fare ipotesi sul contenuto dei file; Determina il tipo di file tramite l'analisi e lo elabora di conseguenza.

Link.exe restituisce zero per l'esito positivo (senza errori).  In caso contrario, il linker restituisce il numero di errore che è stato arrestato il collegamento.  Ad esempio, se il linker genera LNK1104, il linker restituisce 1104.  Di conseguenza, il numero di errore più basso restituito in caso di errore dal linker è 1000.  Valore restituito di 128 rappresenta un problema di configurazione con il sistema operativo o un file con estensione config. il caricatore non è stato caricato link.exe o c2.dll.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)