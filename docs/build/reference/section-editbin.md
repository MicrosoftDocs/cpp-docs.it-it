---
title: /SECTION (EDITBIN)
ms.date: 11/04/2016
f1_keywords:
- /section
helpviewer_keywords:
- -SECTION editbin option
- SECTION editbin option
- alignment characters in sections
- /SECTION editbin option
ms.assetid: 4680ab4e-c984-4251-8241-93440cad7615
ms.openlocfilehash: 23a7ab9efc96ec10f4ad14547b0c0a20f13ac014
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50523305"
---
# <a name="section-editbin"></a>/SECTION (EDITBIN)

```
/SECTION:name[=newname][,attributes][alignment]
```

## <a name="remarks"></a>Note

Questa opzione consente di modificare gli attributi di una sezione, si esegue l'override gli attributi che sono stati impostati quando il file oggetto per la sezione è stato compilato o collegato.

Dopo i due punti ( **:** ), specificare il *nome* della sezione. Per modificare il nome della sezione, seguire *name* con un segno di uguale (=) e una *newname* per la sezione.

Per impostare o modificare la sezione `attributes`, specificare la virgola (**,**) seguito da uno o più caratteri di attributi. Per negare a un attributo, anteporre il carattere con un punto esclamativo (!). I caratteri seguenti specificano attributi della memoria:

|Attributo|Impostazione|
|---------------|-------------|
|c|codice|
|d|Scaricabile|
|h|eseguibile|
|i|dati inizializzati|
|k|memoria virtuale memorizzato nella cache|
|m|rimozione del collegamento|
|o|informazioni sul collegamento|
|p|paging della memoria virtuale|
|r|read|
|s|shared|
|u|dati non inizializzati|
|w|scrivere|

Per controllare *allineamento*, specificare il carattere **oggetto** seguita da uno dei caratteri seguenti per impostare le dimensioni dell'allineamento in byte, come indicato di seguito:

|Carattere|Dimensione in byte di allineamento|
|---------------|-----------------------------|
|1|1|
|2|2|
|4|4|
|8|8|
|p|16|
|t|32|
|s|64|
|x|Nessun allineamento|

Specificare il `attributes` e *allineamento* caratteri sotto forma di stringa senza spazi. I caratteri non sono tra maiuscole e minuscole.

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)