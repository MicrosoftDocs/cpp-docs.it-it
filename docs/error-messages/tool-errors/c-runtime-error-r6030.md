---
title: Errore di runtime di C R6030
ms.date: 11/04/2016
f1_keywords:
- R6030
helpviewer_keywords:
- R6030
ms.assetid: 0238a6c3-a033-4046-8adc-f8f99d961153
ms.openlocfilehash: 5d7160623d4e1eb83240c09e637c780fefc0d43d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80197119"
---
# <a name="c-runtime-error-r6030"></a>Errore di runtime di C R6030

CRT non inizializzato

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. Questo problema è spesso causato da determinati programmi software di sicurezza, o raramente, da un bug del programma.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Il software di sicurezza potrebbe avere istruzioni specifiche per attenuare questo problema. Per informazioni dettagliate, vedere il sito Web del fornitore del software di sicurezza. In alternativa, verificare la presenza di versioni aggiornate del software di sicurezza oppure provare un software di protezione diverso.
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questo errore si verifica se si usa il runtime C (CRT), ma il codice di avvio CRT non è stato eseguito. È possibile ottenere questo errore se viene usata l'opzione del linker [/entry](../../build/reference/entry-entry-point-symbol.md) per eseguire l'override dell'indirizzo iniziale predefinito, in genere **mainCRTStartup**, **wmainCRTStartup** per un file exe della console, **WinMainCRTStartup** o **wWinMainCRTStartup** per un file exe di Windows o **_DllMainCRTStartup** per una dll. A meno che una delle funzioni precedenti non venga chiamata all'avvio, il runtime C non verrà inizializzato. Queste funzioni di avvio vengono in genere chiamate per impostazione predefinita quando ci si collega alla libreria di runtime C e si usano i punti di ingresso **Main**, **wmain**, **WinMain**o **DllMain** normali.

È anche possibile ottenere questo errore quando un altro programma usa tecniche di inserimento del codice per intercettare alcune chiamate alla libreria di DLL. Questa tecnica viene usata da alcuni programmi di sicurezza intrusivi. Nelle versioni di Visual C++ Studio precedenti a visual studio 2015 è possibile usare una libreria CRT collegata in modo statico per risolvere il problema, ma questa operazione non è consigliata per motivi di sicurezza e di aggiornamento dell'applicazione. La correzione di questo problema potrebbe richiedere l'intervento dell'utente finale.
