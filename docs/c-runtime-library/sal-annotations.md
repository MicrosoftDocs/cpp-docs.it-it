---
title: Annotazioni SAL
description: Breve descrizione del linguaggio di annotazione del codice sorgente Microsoft (SAL).
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- __z annotation
- ref annotation
- _opt annotation
- __checkreturn annotatioin
- __deref_opt annotation
- deref_opt annotation
- __deref annotation
- __in annotation
- annotations [C++]
- z annotation
- _inout annotation
- __ref annotation
- full annotation
- _in annotation
- _ref annotation
- __out annotation
- _ecount annotation
- SAL annotations
- __opt annotation
- inout annotation
- in annotation
- _CA_SHOULD_CHECK_RETURN
- __bcount annotation
- _full annotation
- _bcount annotation
- deref annotation
- part annotation
- _out annotation
- __nz annotation
- __part annotation
- opt annotation
- __full annotation
- _nz annotation
- _z annotation
- out annotation
- __ecount annotation
- __inout annotation
- SAL annotations, _CA_SHOULD_CHECK_RETURN
- _deref_opt annotation
- _deref annotation
- nz annotation
- _part annotation
- ecount annotation
- bcount annotation
ms.assetid: 81893638-010c-41a0-9cb3-666fe360f3e0
ms.openlocfilehash: 727c81ae1b141346bb47ff92b6af76d5c45aa106
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590264"
---
# <a name="sal-annotations"></a>Annotazioni SAL

Se si esaminano i file di intestazione della libreria, è possibile notare alcune annotazioni insolite, ad esempio, `_In_z` e `_Out_z_cap_(_Size)`. Questi sono esempi del linguaggio di annotazione del codice sorgente Microsoft (SAL), il quale fornisce un set di annotazioni per descrivere come una funzione utilizza i parametri, ad esempio, le ipotesi che fa su di essi e le garanzie che produce in fase di completamento. Il file di intestazione \<sal.h> definisce le annotazioni.

Per altre informazioni sull'uso delle annotazioni SAL in Visual Studio, vedere [Uso delle annotazioni SAL per ridurre gli errori del codice C/C++](../code-quality/using-sal-annotations-to-reduce-c-cpp-code-defects.md).

## <a name="see-also"></a>Vedi anche

[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
