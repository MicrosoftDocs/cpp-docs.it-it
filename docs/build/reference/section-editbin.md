---
description: Altre informazioni su:/SECTION (EDITBIN))
title: /SECTION (EDITBIN)
ms.date: 11/04/2016
f1_keywords:
- /section_editbin
helpviewer_keywords:
- -SECTION editbin option
- SECTION editbin option
- alignment characters in sections
- /SECTION editbin option
ms.assetid: 4680ab4e-c984-4251-8241-93440cad7615
ms.openlocfilehash: 51d1305ca4f3e0e8222ae9408b44563a4c480d57
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224868"
---
# <a name="section-editbin"></a>/SECTION (EDITBIN)

```
/SECTION:name[=newname][,attributes][alignment]
```

## <a name="remarks"></a>Commenti

Questa opzione consente di modificare gli attributi di una sezione, sostituendo gli attributi impostati quando il file oggetto per la sezione è stato compilato o collegato.

Dopo i due punti ( **:** ) specificare il *nome* della sezione. Per modificare il nome della sezione, seguire il *nome* con un segno di uguale (=) e un *newname* per la sezione.

Per impostare o modificare la sezione `attributes` , specificare una virgola (**,**) seguita da uno o più caratteri degli attributi. Per negare un attributo, anteporre al carattere un punto esclamativo (!). I caratteri seguenti specificano gli attributi di memoria:

|Attributo|Impostazione|
|---------------|-------------|
|c|codice|
|d|annullabile|
|h|eseguibile|
|i|dati inizializzati|
|k|memoria virtuale memorizzata nella cache|
|m|Rimuovi collegamento|
|o|informazioni sul collegamento|
|p|memoria virtuale di paging|
|r|leggere|
|s|shared|
|u|dati non inizializzati|
|w|scrivere|

Per controllare l' *allineamento*, specificare il carattere **a** seguito da uno dei caratteri seguenti per impostare la dimensione dell'allineamento in byte, come indicato di seguito:

|Carattere|Dimensioni allineamento in byte|
|---------------|-----------------------------|
|1|1|
|2|2|
|4|4|
|8|8|
|p|16|
|u|32|
|s|64|
|x|Nessun allineamento|

Specificare i `attributes` caratteri di *allineamento* e come stringa senza spazi vuoti. I caratteri non fanno distinzione tra maiuscole e minuscole.

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)
