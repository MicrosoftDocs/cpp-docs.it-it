---
title: Specifica del nome del percorso
ms.date: 11/04/2016
helpviewer_keywords:
- names [C++], compiler output files
- cl.exe compiler, output files
- output files, specifying pathnames
ms.assetid: 7a6595ce-3383-44ae-957a-466bfa29c343
ms.openlocfilehash: f83adcb87994d13edd1c1579183377a365e2051e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50638360"
---
# <a name="specifying-the-pathname"></a>Specifica del nome del percorso

Ogni file di output l'opzione accetta un *pathname* argomento che è possibile specificare un percorso e un nome per il file di output. L'argomento può includere un nome di unità, directory e nome file. È consentito alcuno spazio tra l'opzione e l'argomento.

Se *pathname* include un nome file senza estensione, il compilatore assegna l'output un'estensione per impostazione predefinita. Se *pathname* include una directory, ma nessun nome di file, il compilatore crea un file con un nome predefinito della directory specificata. Il nome predefinito si basa sul nome di base del file di origine e un'estensione per impostazione predefinita in base al tipo di file di output. Se si lascia *pathname* completamente, il compilatore crea un file con un nome predefinito in una directory predefinita.

In alternativa, il *pathname* argomento può essere un nome di dispositivo (AUX, CON, PRN o null) anziché un nome di file. Non utilizzare uno spazio tra l'opzione e il nome del dispositivo o un carattere due punti come parte del nome del dispositivo.

|Nome del dispositivo|Descrizione|
|-----------------|----------------|
|AUX|Dispositivo ausiliario|
|CON|Console|
|PRN|Stampante|
|NUL|Dispositivo null (nessun file creato)|

## <a name="example"></a>Esempio

La seguente riga di comando invia un file di mapping alla stampante:

```
CL /FmPRN HELLO.CPP
```

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)