---
description: 'Altre informazioni su: errore irreversibile del compilatore di risorse RC1015'
title: Errore irreversibile del compilatore di risorse RC1015
ms.date: 11/04/2016
f1_keywords:
- RC1015
helpviewer_keywords:
- RC1015
ms.assetid: 23f187e1-5538-40b5-9042-edd2888f55c2
ms.openlocfilehash: 41afe385189d35e80e5f624d379b45c0dca17441
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265662"
---
# <a name="resource-compiler-fatal-error-rc1015"></a>Errore irreversibile del compilatore di risorse RC1015

non è possibile aprire il file di inclusione ' filename '

Il file di inclusione specificato non esiste, non è stato possibile aprirlo oppure non è stato trovato.

Verificare che le impostazioni dell'ambiente siano valide e che il percorso del file specificato sia corretto. Verificare che siano disponibili handle di file sufficienti per il compilatore di risorse. Se il file si trova in un'unità di rete, assicurarsi di disporre delle autorizzazioni per aprire il file.

RC1015 può verificarsi anche se il file di inclusione è presente in una directory specificata come directory di inclusione aggiuntiva nella pagina proprietà di configurazione-> risorse-> pagina delle proprietà generale; specificare il percorso completo del file di inclusione.
