---
title: /Fi (pre-elaborazione nome file di output)
ms.date: 11/04/2016
f1_keywords:
- /Fi
helpviewer_keywords:
- Fi compiler option (C++)
- -Fi compiler option (C++)
- /Fi compiler option (C++)
- preprocessing output files, file name
ms.assetid: 6d0ba983-a8b7-41ec-84f5-b4688ef8efee
ms.openlocfilehash: d4de722ad33a9c9e5e7c37176bbe5d7031b68a39
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50450180"
---
# <a name="fi-preprocess-output-file-name"></a>/Fi (pre-elaborazione nome file di output)

Specifica il nome del file di output a cui il [/P (pre-elabora in un File)](../../build/reference/p-preprocess-to-a-file.md) opzione del compilatore scrive l'output pre-elaborato.

## <a name="syntax"></a>Sintassi

```
/Fipathname
```

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`pathname`|Il nome e percorso del file di output prodotti dal **/P** opzione del compilatore.|

## <a name="remarks"></a>Note

Usare la **/Fi** opzione del compilatore in combinazione con il **/P** opzione del compilatore.

Se si specifica solo un percorso per il `pathname` parametro, il nome di base del file di origine viene utilizzato come nome di base del file di output pre-elaborato. Il `pathname` parametro non richiede un'estensione particolare. Tuttavia, un'estensione di "i" viene utilizzata se non si specifica un'estensione di file.

## <a name="example"></a>Esempio

La seguente riga di comando pre-elabora effettuata, conserva i commenti, aggiunge [#line](../../preprocessor/hash-line-directive-c-cpp.md) direttive e scrive il risultato nel file myProcess.

```
CL /P /FiMYPROCESS.I PROGRAM.CPP
```

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[/P (pre-elabora in un file)](../../build/reference/p-preprocess-to-a-file.md)<br/>
[Specifica del nome del percorso](../../build/reference/specifying-the-pathname.md)