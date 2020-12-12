---
description: Altre informazioni su:/BIND
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
ms.openlocfilehash: 87ea0265555991fca019760feec4395692c074ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187143"
---
# <a name="bind"></a>/BIND

```
/BIND[:PATH=path]
```

## <a name="remarks"></a>Commenti

Questa opzione consente di impostare gli indirizzi dei punti di ingresso nella tabella degli indirizzi di importazione per un file eseguibile o una DLL. Usare questa opzione per ridurre il tempo di caricamento di un programma.

Specificare il file eseguibile del programma e le dll nell'argomento *files* nella riga di comando di EDITBIN). L'argomento facoltativo *path* di/BIND specifica il percorso delle DLL utilizzate dai file specificati. Separare più directory con un punto e virgola (**;**). Se il *percorso* non è specificato, EDITBIN) Cerca nelle directory specificate nella variabile di ambiente Path. Se si specifica *path* , EDITBIN) ignora la variabile Path.

Per impostazione predefinita, il caricatore del programma imposta gli indirizzi dei punti di ingresso quando carica un programma. La quantità di tempo impiegato da questo processo varia a seconda del numero di dll e del numero di punti di ingresso a cui fa riferimento il programma. Se un programma è stato modificato con/BIND e gli indirizzi di base per il file eseguibile e le relative dll non sono in conflitto con le dll già caricate, non è necessario che il sistema operativo imposti questi indirizzi. In una situazione in cui i file sono basati in modo errato, il sistema operativo riposiziona le dll del programma e Ricalcola gli indirizzi del punto di ingresso, che aggiunge al tempo di caricamento del programma.

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)
