---
description: 'Altre informazioni su: override del routing dei comandi standard'
title: Override del routing dei comandi standard
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], overriding
- command handling [MFC], routing commands
- overriding, standard command routing
ms.assetid: 872b698a-7432-40c4-9008-68721e8effa5
ms.openlocfilehash: 5241e767beee85f92875128cc5ebccd1a23477f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205993"
---
# <a name="overriding-the-standard-command-routing"></a>Override del routing dei comandi standard

In rari casi, quando è necessario implementare una variante del routing standard del Framework, è possibile eseguirne l'override. L'idea è modificare il routing in una o più classi eseguendo l'override `OnCmdMsg` in tali classi. Eseguire questa operazione:

- Nella classe che interrompe l'ordine da passare a un oggetto non predefinito.

- Nel nuovo oggetto non predefinito o nelle destinazioni dei comandi potrebbe a sua volta passare i comandi a.

Se si inserisce un nuovo oggetto nel routing, la classe deve essere una classe di destinazione comando. Nelle versioni di che eseguono l'override di `OnCmdMsg` , assicurarsi di chiamare la versione di cui si sta eseguendo l'override. Per esempi, vedere la funzione membro [OnCmdMsg](reference/ccmdtarget-class.md#oncmdmsg) della classe `CCmdTarget` nel *riferimento a MFC* e le versioni di tali classi come `CView` e `CDocument` nel codice sorgente fornito.

## <a name="see-also"></a>Vedi anche

[Modalità di chiamata di un gestore da parte del Framework](how-the-framework-calls-a-handler.md)
