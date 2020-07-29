---
title: Costanti C a virgola mobile
ms.date: 11/04/2016
helpviewer_keywords:
- types [C], constants
- floating-point numbers, floating-point constants
- constants, floating-point
- floating-point constants
- floating-point constants, about floating-point constants
- double data type, floating-point constants
ms.assetid: e1bd9b44-d6ab-470c-93e5-07142c7a2062
ms.openlocfilehash: 8777f04b047516ef29ae7bf67ddaf4195e3aaf6e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228024"
---
# <a name="c-floating-point-constants"></a>Costanti C a virgola mobile

Una costante a virgola mobile è un numero decimale che rappresenta un numero reale con segno. La rappresentazione di un numero reale con segno include una parte intera, una parte frazionaria e un esponente. Usare le costanti a virgola mobile per rappresentare valori a virgola mobile non modificabili.

## <a name="syntax"></a>Sintassi

*floating-point-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*fractional-constant* *exponent-part*<sub>opt</sub> *floating-suffix*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *exponent-part* *floating-suffix*<sub>opt</sub>

*fractional-constant*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-Sequence*<sub>opt</sub> **.** *digit-sequence*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*sequenza numerica*  **.**

*parte esponente*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**e** *segno*<sub>opt</sub> *-sequenza*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**E** *segno*<sub>opt</sub> *-sequenza*

*sign*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**+ -**

*sequenza numerica*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cifre*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digit-sequence* *digit*

*floating-suffix*: uno tra<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**f l F L**

È possibile omettere le cifre prima del punto decimale (parte del valore intero) o le cifre dopo il punto decimale (la parte frazionaria), ma non entrambe. È possibile omettere il punto decimale solo se si include un esponente. Non possono essere presenti spazi vuoti tra le cifre o i caratteri della costante.

Gli esempi seguenti illustrano alcune forme delle espressioni e delle costanti a virgola mobile:

```C
15.75
1.575E1   /* = 15.75   */
1575e-2   /* = 15.75   */
-2.5e-3   /* = -0.0025 */
25E-4     /* =  0.0025 */
```

Le costanti a virgola mobile sono positive a meno che non siano precedute da un segno meno ( **-** ). In questo caso, il segno di sottrazione viene considerato come operatore di negazione unario aritmetico. Le costanti a virgola mobile sono **`float`** di tipo, **`double`** o **`long double`** .

Una costante a virgola mobile senza un suffisso **f**, **f**, **l**o **l** è di tipo **`double`** . Se la lettera **f** o **f** è il suffisso, la costante è di tipo **`float`** . Se il suffisso è la lettera **l** o **l**, il tipo è **`long double`** . Ad esempio:

```C
10.0L  /* Has type long double  */
10.0F  /* Has type float        */
```

Si noti che il compilatore C Microsoft rappresenta internamente **`long double`** lo stesso tipo di **`double`** . Per informazioni sul tipo, e, vedere [archiviazione dei tipi di base](../c-language/storage-of-basic-types.md) **`double`** **`float`** **`long double`** .

È possibile omettere la parte intera della costante a virgola mobile, come illustrato negli esempi seguenti. Il numero .75 può essere rappresentato in diversi modi, inclusi i seguenti:

```C
.0075e2
0.075e1
.075e1
75e-2
```

## <a name="see-also"></a>Vedere anche

[Costanti C](../c-language/c-constants.md)
