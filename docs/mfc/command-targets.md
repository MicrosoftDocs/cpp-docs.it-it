---
description: 'Altre informazioni su: destinazioni dei comandi'
title: Destinazioni comandi
ms.date: 11/04/2016
helpviewer_keywords:
- command targets
- command mapping
- messages, command [MFC]
- command routing [MFC], command targets
ms.assetid: b0f784e5-c6dc-4391-9e71-aa7b7dcbe9f0
ms.openlocfilehash: b7be03282400c2d3a0dcf5eb0d24a0b06456ebca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206253"
---
# <a name="command-targets"></a>Destinazioni comandi

La figura [comandi nel Framework](user-interface-objects-and-command-ids.md) Mostra la connessione tra un oggetto dell'interfaccia utente, ad esempio una voce di menu, e la funzione di gestione chiamata dal Framework per eseguire il comando risultante quando si fa clic sull'oggetto.

Windows invia messaggi che non sono messaggi di comando direttamente a una finestra il cui gestore per il messaggio viene quindi chiamato. Tuttavia, il Framework instrada i comandi a una serie di oggetti candidati, detti "destinazioni dei comandi", uno dei quali generalmente richiama un gestore per il comando. Le funzioni del gestore funzionano allo stesso modo sia per i comandi sia per i messaggi Windows standard, ma i meccanismi con cui vengono chiamati sono diversi, come descritto in [come il Framework chiama un gestore](how-the-framework-calls-a-handler.md).

## <a name="see-also"></a>Vedi anche

[Messaggi e comandi nel Framework](messages-and-commands-in-the-framework.md)
