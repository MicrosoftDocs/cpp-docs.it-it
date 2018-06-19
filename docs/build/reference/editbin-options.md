---
title: Opzioni di EDITBIN | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- editbin
dev_langs:
- C++
helpviewer_keywords:
- EDITBIN program, options
ms.assetid: 2da9f88e-cbab-4d64-bb66-ef700535230f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1922e410b0151337ce403e24d20ae90b7e964cd5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32378522"
---
# <a name="editbin-options"></a>Opzioni di EDITBIN
È possibile utilizzare EDITBIN per modificare i file oggetto, i file eseguibili e librerie a collegamento dinamico (DLL). Le opzioni specificano le modifiche che EDITBIN apporta.  
  
 Un'opzione è costituito da un identificatore di opzione, ovvero un trattino (-) o una barra (/), seguito dal nome dell'opzione. I nomi delle opzioni non possono essere abbreviati. Per alcune opzioni è possibile specificare argomenti, preceduti da due punti ( : ). Spazi o tabulazioni non sono consentiti all'interno di una specifica opzione. Utilizzare uno o più spazi o tabulazioni per separare le specifiche di opzione nella riga di comando. Per i nomi delle opzioni e i corrispondenti argomenti parola chiave o nome file, non viene rilevata la distinzione tra maiuscole e minuscole. Ad esempio, -bind e /BIND hanno lo stesso significato.  
  
 EDITBIN dispone delle opzioni seguenti:  
  
|Opzione|Scopo|  
|------------|-------------|  
|[/ALLOWBIND](../../build/reference/allowbind.md)|Specifica se una DLL può essere associata.|  
|[/ALLOWISOLATION](../../build/reference/allowisolation.md)|Specifica il comportamento di ricerca nel manifest di file eseguibile o DLL.|  
|[/APPCONTAINER](../../build/reference/appcontainer.md)|Specifica se l'app deve essere eseguita in un AppContainer, ad esempio, un'app UWP.|  
|[/BIND](../../build/reference/bind.md)|Imposta gli indirizzi per i punti di ingresso negli oggetti specificati per ridurre il tempo di caricamento.|  
|[/DYNAMICBASE](../../build/reference/dynamicbase.md)|Specifica se l'immagine eseguibile o DLL può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (Address Space Layout Randomization).|  
|[/ ERRORREPORT](../../build/reference/errorreport-editbin-exe.md)|Segnala a Microsoft gli errori interni.|  
|[/HEAP](../../build/reference/heap.md)|Imposta la dimensione dell'heap dell'immagine eseguibile in byte.|  
|[/HIGHENTROPYVA](../../build/reference/highentropyva.md)|Specifica se l'immagine eseguibile o DLL supporta un'entropia elevata (64 bit) per ASLR (Address Space Layout Randomization).|  
|[/INTEGRITYCHECK](../../build/reference/integritycheck.md)|Specifica se verificare la firma digitale al momento del caricamento.|  
|[/LARGEADDRESSAWARE](../../build/reference/largeaddressaware.md)|Specifica se l'oggetto supporta gli indirizzi maggiori di 2 gigabyte.|  
|[/NOLOGO](../../build/reference/nologo-editbin.md)|Non visualizza il messaggio di avvio di EDITBIN.|  
|[/NXCOMPAT](../../build/reference/nxcompat.md)|Specifica se l'immagine eseguibile è compatibile con la funzionalità Protezione esecuzione programmi di Windows.|  
|[/REBASE](../../build/reference/rebase.md)|Imposta gli indirizzi di base per gli oggetti specificati.|  
|[/RELEASE](../../build/reference/release.md)|Imposta il checksum nell'intestazione.|  
|[O DELLA SEZIONE](../../build/reference/section-editbin.md)|Esegue l'override gli attributi di una sezione.|  
|[/STACK](../../build/reference/stack.md)|Imposta la dimensione dello stack dell'immagine eseguibile in byte.|  
|[/SUBSYSTEM](../../build/reference/subsystem.md)|Specifica l'ambiente di esecuzione.|  
|[/SWAPRUN](../../build/reference/swaprun.md)|Specifica che l'immagine eseguibile deve essere copiata nel file di scambio e quindi eseguita da li.|  
|[/TSAWARE](../../build/reference/tsaware.md)|Specifica che l'applicazione è progettata per funzionare in un ambiente multiutente.|  
|[/VERSION](../../build/reference/version.md)|Imposta il numero di versione nell'intestazione.|  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti di compilazione di C/C++](../../build/reference/c-cpp-build-tools.md)   
 [Riferimento a EDITBIN](../../build/reference/editbin-reference.md)