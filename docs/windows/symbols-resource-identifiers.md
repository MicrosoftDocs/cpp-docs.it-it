---
title: Identificatori di risorsa (simboli) (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.symbol.identifiers
helpviewer_keywords:
- symbols [C++], resource identifiers
- symbols [C++], creating
- resource symbols
- symbols [C++], editing
- resource editors [C++], resource symbols
ms.assetid: 8fccc09a-0237-4a65-b9c4-57d60c59e324
ms.openlocfilehash: 1a01c127c69bb54209ecc059394eb85ef0ca4eeb
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509621"
---
# <a name="resource-identifiers-symbols-c"></a>Identificatori di risorsa (simboli) (C++)

Un simbolo è un identificatore (ID) di risorsa costituito da due parti, un nome di simbolo (stringa di testo) mappato a un valore di simbolo (Integer), ad esempio:

```cpp
IDC_EDITNAME = 5100
```

Molto spesso i nomi dei simboli sono denominati identificatori.

I simboli offrono un modo descrittivo per fare riferimento alle risorse e agli oggetti dell'interfaccia utente sia nel codice sorgente che durante l'uso negli editor di risorse. I simboli possono essere visualizzati e modificati facilmente mediante la [finestra di dialogo Simboli risorsa](./creating-new-symbols.md).

Il numero di risorse e simboli è direttamente proporzionale alle dimensioni e al livello di complessità dell'applicazione. Può quindi risultare difficile tenere traccia di un numero elevato di simboli distribuiti in diversi file. La finestra di dialogo **simboli risorsa** semplifica la gestione dei simboli offrendo uno strumento centrale tramite il quale è possibile:

- [Crea simboli](../windows/creating-new-symbols.md)

- [Gestisci simboli](../windows/changing-a-symbol-or-symbol-name-id.md)

- [Visualizzare gli ID simbolo predefiniti](../windows/predefined-symbol-ids.md)

Quando si crea una nuova risorsa o un nuovo oggetto risorsa, gli [editor di risorse](../windows/resource-editors.md) forniscono alla risorsa un nome predefinito, ad esempio `IDC_RADIO1`, e le assegnano un valore. La definizione nome-più-valore viene archiviata nel `Resource.h` file.

> [!NOTE]
> Quando si copiano risorse o oggetti risorsa da un file RC a un altro, Visual C++ potrebbe modificare il valore del simbolo della risorsa trasferita o il nome e il valore del simbolo, allo scopo di evitare conflitti con i nomi o i valori dei simboli nel file esistente.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>
