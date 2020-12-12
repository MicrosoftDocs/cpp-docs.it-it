---
description: Ulteriori informazioni su:. File ILK come input del linker
title: File ILK come input del linker
ms.date: 11/04/2016
helpviewer_keywords:
- ILK files
- .ilk files
ms.assetid: 7324c104-9e5d-423d-b268-b59f92607bf2
ms.openlocfilehash: 0aaa5fac19cedb8d94fc6dc9ab03a0f23fa0e49b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192733"
---
# <a name="ilk-files-as-linker-input"></a>File ILK come input del linker

Quando si esegue il collegamento incrementale, il collegamento Aggiorna il file di stato ilk creato durante il primo collegamento incrementale. Questo file ha lo stesso nome di base del file con estensione exe o dll e ha l'estensione ILK. Durante i successivi collegamenti incrementali, LINK aggiorna il file ilk. Se il file ilk è mancante, LINK esegue un collegamento completo e crea un nuovo file ilk. Se il file ilk non è utilizzabile, il collegamento esegue un collegamento non incrementale. Per informazioni dettagliate sul collegamento incrementale, vedere l'opzione [collegamento incrementale (/Incremental)](incremental-link-incrementally.md) .

## <a name="see-also"></a>Vedi anche

[File di input collegamento](link-input-files.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
