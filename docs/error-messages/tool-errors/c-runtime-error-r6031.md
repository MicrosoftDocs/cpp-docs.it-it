---
description: 'Altre informazioni su: errore di runtime di C R6031'
title: Errore di runtime di C R6031
ms.date: 11/04/2016
f1_keywords:
- R6031
helpviewer_keywords:
- R6031
ms.assetid: 805d4cd1-cb2f-43fe-87e6-e7bd5b7329c5
ms.openlocfilehash: cd3a9e62e4209df5aa232ac9df6b69ce8a63d10a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97206617"
---
# <a name="c-runtime-error-r6031"></a>Errore di runtime di C R6031

Tentativo di inizializzare la libreria CRT più di una volta. Indica un bug nell'applicazione.

> [!NOTE]
> Se si verifica questo messaggio di errore durante l'esecuzione di un'app, l'app è stata arrestata perché presenta un problema interno. Questo può essere causato da un bug nell'app o da un bug in un componente aggiuntivo o in un'estensione usata dall'app.
>
> Per risolvere questo errore, è possibile provare questi passaggi:
>
> - Utilizzare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per ripristinare o reinstallare il programma.
> - Usare la pagina **app e funzionalità** o **programmi e funzionalità** nel **Pannello di controllo** per rimuovere, ripristinare o reinstallare tutti i programmi di estensione o componenti aggiuntivi usati dall'app.
> - Controllare **Windows Update** nel **Pannello di controllo** per gli aggiornamenti software.
> - Verificare la presenza di una versione aggiornata dell'app. Se il problema persiste, contattare il fornitore dell'app.

**Informazioni per i programmatori**

Questa diagnostica indica che le istruzioni MSIL sono state eseguite durante il blocco del caricatore. Per ulteriori informazioni, vedere [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).
