---
title: /BIND
ms.date: 11/04/2016
f1_keywords:
- /bind
helpviewer_keywords:
- -BIND editbin option
- entry points, addresses
- BIND editbin option
- entry points
- /BIND editbin option
- import address table
ms.assetid: 3772b330-1868-4c90-857d-c31faa867982
ms.openlocfilehash: eb364f951e97da6a3c4950290669d835e4c24be4
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418919"
---
# <a name="bind"></a>/BIND

```
/BIND[:PATH=path]
```

## <a name="remarks"></a>Note

Questa opzione imposta gli indirizzi dei punti di ingresso nella tabella di indirizzi di importazione per un file eseguibile o DLL. Usare questa opzione per ridurre il tempo di caricamento di un programma.

Specificare il programma i file eseguibili e DLL nel *file* argomento nella riga di comando EDITBIN. L'opzione facoltativa *percorso* argomento /BIND. specifica il percorso della DLL utilizzate dai file specificati. Più directory separate con un punto e virgola (**;**). Se *percorso* non viene specificato, la ricerca verrà effettuata nelle directory specificate nella variabile di ambiente PATH. Se *percorso* viene specificato, la variabile di percorso verrà ignorata.

Per impostazione predefinita, il caricatore di programma imposta gli indirizzi dei punti di ingresso durante il caricamento di un programma. La quantità di tempo di questo processo richiede varia a seconda del numero delle DLL e il numero di punti di ingresso del programma a cui fa riferimento. Se un programma è stato modificato con /BIND. e se gli indirizzi di base per il file eseguibile e le DLL non sono in conflitto con le DLL che sono già caricate, il sistema operativo non è necessario impostare questi indirizzi. In una situazione in cui si basano erroneamente i file, il sistema operativo consente di rilocare le DLL del programma e Ricalcola gli indirizzi di punto di ingresso, che aggiunge al tempo di caricamento del programma.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)
