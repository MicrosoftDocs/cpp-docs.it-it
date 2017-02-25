---
title: "Supporto a virgola mobile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.math"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "numeri a virgola mobile"
  - "numeri a virgola mobile, routine matematiche"
  - "routine matematiche"
ms.assetid: e4fcaf69-5c8e-4854-a9bb-1f412042131e
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Supporto a virgola mobile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Molte funzioni della libreria di runtime Microsoft richiedono il supporto della virgola mobile da un coprocessore matematico o dalle relative librerie fornite insieme al compilatore.  Le funzioni di supporto della virgola mobile vengono caricate solo se sono richieste.  
  
 Quando si usa un identificatore di tipo a virgola mobile nella stringa di formato di una chiamata a una funzione nella famiglia `printf` o `scanf`, è necessario specificare un valore a virgola mobile o un puntatore a quest'ultimo nell'elenco degli argomenti, al fine di informare il compilatore della necessità di attivare il supporto della virgola mobile.  
  
 Per il codice di esempio che mostra come gestire le eccezioni correlate alla virgola mobile, vedere [\_fpieee\_flt](../c-runtime-library/reference/fpieee-flt.md).  
  
 Il controllo della precisione della virgola mobile per i valori intermedi è affidato alle funzioni [\_control87, \_controlfp, \_\_control87\_2](../c-runtime-library/reference/control87-controlfp-control87-2.md).  Per impostazione predefinita, il controllo della precisione in `_controlfp` è impostato su 53 bit \(\_PC\_53\).  Il collegamento tramite FP10.OBJ modifica il controllo della precisione predefinito in 64 bit \(\_PC\_64\).  Nella riga di comando del linker FP10.OBJ deve trovarsi prima di LIBC.LIB, LIBCMT.LIB o MSVCRT.LIB.  
  
### Funzioni a virgola mobile  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|--------------------------------|  
|[abs](../Topic/abs.md)|Restituire il valore assoluto di `int`|[\<caps:sentence id\="tgt14" sentenceid\="9594ba199e25e9de6b463c8efc9fbe95" class\="tgtSentence"\>System::Math::Abs\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)|  
|[acos, acosf](../c-runtime-library/reference/acos-acosf-acosl.md)|Calcolare arcocoseno|[\<caps:sentence id\="tgt17" sentenceid\="954a441495360a1fa8b0170297b2ff38" class\="tgtSentence"\>System::Math::Acos\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.acos.aspx)|  
|[asin, asinf](../c-runtime-library/reference/asin-asinf-asinl.md)|Calcolare arcoseno|[\<caps:sentence id\="tgt20" sentenceid\="313917cde9698a0924536719f5bece25" class\="tgtSentence"\>System::Math::Asin\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.asin.aspx)|  
|[atan, atanf, atan2, atan2f](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|Calcolare arcotangente|[System::Math::Atan](https://msdn.microsoft.com/en-us/library/system.math.atan.aspx), [System::Math::Atan2](https://msdn.microsoft.com/en-us/library/system.math.atan2.aspx)|  
|[atof, \_atof\_l, \_wtof, \_wtof\_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)|Convertire una stringa di caratteri in un valore a virgola mobile a precisione doppia|[System::Convert::ToSingle](https://msdn.microsoft.com/en-us/library/system.convert.tosingle.aspx), [System::Convert::ToDouble](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)|  
|[Funzioni di Bessel](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)|Calcolare le funzioni di Bessel `_j0`, `_j1`, `_jn`, `_y0`, `_y1`, `_yn`|Non applicabile.  Per chiamare la funzione C standard, usare `PInvoke`.  Per altre informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_cabs](../c-runtime-library/reference/cabs.md)|Trovare il valore assoluto di un numero complesso|Non applicabile.|  
|[cbrt](../c-runtime-library/reference/cbrt-cbrtf-cbrtl.md)|Calcolare la radice cubica|Non applicabile.|  
|[ceil, ceilf](../c-runtime-library/reference/ceil-ceilf-ceill.md)|Trovare il limite massimo dell'intero|[\<caps:sentence id\="tgt39" sentenceid\="656009d71fb974368bded363746de018" class\="tgtSentence"\>System::Math::Ceiling\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.ceiling.aspx)|  
|[\_chgsign, \_chgsignf, \_chgsignl](../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)|Invertire il segno di un argomento a virgola mobile a precisione doppia o di un argomento lungo a virgola mobile a precisione doppia|Non applicabile.|  
|[\_clear87, \_clearfp](../c-runtime-library/reference/clear87-clearfp.md)|Acquisire e cancellare la parola di stato a virgola mobile|Non applicabile.|  
|[\_control87, \_controlfp, \_\_control87\_2](../c-runtime-library/reference/control87-controlfp-control87-2.md), [\_controlfp\_s](../c-runtime-library/reference/controlfp-s.md)|Acquisire la parola di controllo a virgola mobile precedente e impostare un nuovo valore della parola di controllo|Non applicabile.|  
|[copysign, copysignf, copysignl, \_copysign, \_copysignf, \_copysignl](../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)|Restituire un valore con il segno di un altro valore|Non applicabile.|  
|[cos, cosf, cosh, coshf](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|Calcolare il coseno|[System::Math::Cos](https://msdn.microsoft.com/en-us/library/system.math.cos.aspx), [System::Math::Cosh](https://msdn.microsoft.com/en-us/library/system.math.cosh.aspx)|  
|[difftime](../c-runtime-library/reference/difftime-difftime32-difftime64.md)|Calcolare la differenza tra due valori dell'intervallo di tempo specificati|[\<caps:sentence id\="tgt54" sentenceid\="5f4f365a3cd7f368db2f6ce31b797fdf" class\="tgtSentence"\>System::DateTime::Subtract\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.datetime.subtract.aspx)|  
|[div](../c-runtime-library/reference/div.md)|Dividere un intero per un altro, ottenendo quoziente e resto|Non applicabile.|  
|[\_ecvt](../c-runtime-library/reference/ecvt.md), [\_ecvt\_s](../c-runtime-library/reference/ecvt-s.md)|Convertire `double` in una stringa di caratteri di una lunghezza specificata|[\<caps:sentence id\="tgt60" sentenceid\="ed8e24ad5c647dc4efa4fbe1e9bbc5e3" class\="tgtSentence"\>System::Convert::ToString\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[exp, expf](../c-runtime-library/reference/exp-expf.md)|Calcolare la funzione esponenziale|[\<caps:sentence id\="tgt63" sentenceid\="81a65df6ac66cdc4a4b12c2f7e555487" class\="tgtSentence"\>System::Math::Exp\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.exp.aspx)|  
|[fabs, fabsf](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|Trovare il valore assoluto|[\<caps:sentence id\="tgt66" sentenceid\="9594ba199e25e9de6b463c8efc9fbe95" class\="tgtSentence"\>System::Math::Abs\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)|  
|[\_fcvt](../c-runtime-library/reference/fcvt.md), [\_fcvt\_s](../c-runtime-library/reference/fcvt-s.md)|Convertire `double` in una stringa con un numero di cifre specificato dopo la virgola decimale|[\<caps:sentence id\="tgt69" sentenceid\="ed8e24ad5c647dc4efa4fbe1e9bbc5e3" class\="tgtSentence"\>System::Convert::ToString\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[\_finite](../c-runtime-library/reference/finite-finitef.md)|Determinare se il valore a virgola mobile a precisione doppia specificato è finito|[\<caps:sentence id\="tgt72" sentenceid\="8d081c50adeda3dde4cebab81a0b3583" class\="tgtSentence"\>System::Double::IsInfinity\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.double.isinfinity.aspx)|  
|[floor, floorf](../c-runtime-library/reference/floor-floorf-floorl.md)|Trovare il numero intero più grande minore di o uguale all'argomento|[\<caps:sentence id\="tgt75" sentenceid\="609db9ab0433b647d5350d3b965d70f9" class\="tgtSentence"\>System::Math::Floor\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.floor.aspx)|  
|[fmod, fmodf](../c-runtime-library/reference/fmod-fmodf.md)|Trovare un resto a virgola mobile|[\<caps:sentence id\="tgt78" sentenceid\="127a04426267ccb17fb4b566ad56de9c" class\="tgtSentence"\>System::Math::IEEERemainder\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.ieeeremainder.aspx)|  
|[\_fpclass](../c-runtime-library/reference/fpclass-fpclassf.md)|Restituire una parola di stato contenente informazioni sulla classe a virgola mobile|[System::Double::IsInfinity](https://msdn.microsoft.com/en-us/library/system.double.isinfinity.aspx), [System::Double::IsNegativeInfinity](https://msdn.microsoft.com/en-us/library/system.double.isnegativeinfinity.aspx), [System::Double::IsPositiveInfinity](https://msdn.microsoft.com/en-us/library/system.double.ispositiveinfinity.aspx), [System::Double::IsNan](https://msdn.microsoft.com/en-us/library/system.double.isnan.aspx)|  
|[\_fpieee\_flt](../c-runtime-library/reference/fpieee-flt.md)|Richiamare il gestore di trap definito dall'utente per le eccezioni IEEE a virgola mobile|Non applicabile.|  
|[\_fpreset](../c-runtime-library/reference/fpreset.md)|Reinizializzare il pacchetto matematica a virgola mobile||  
|[frexp](../c-runtime-library/reference/frexp.md)|Calcolare il valore esponenziale|Non applicabile.|  
|[\_gcvt](../c-runtime-library/reference/gcvt.md), [\_gcvt\_s](../c-runtime-library/reference/gcvt-s.md)|Convertire un valore a virgola mobile in una stringa di caratteri|[\<caps:sentence id\="tgt92" sentenceid\="ed8e24ad5c647dc4efa4fbe1e9bbc5e3" class\="tgtSentence"\>System::Convert::ToString\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.convert.tostring.aspx)|  
|[hypot, hypotf, hypotl, \_hypot, \_hypotf, \_hypotl](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|Calcolare l'ipotenusa di un triangolo rettangolo|Non applicabile.|  
|[\_isnan](../c-runtime-library/reference/isnan-isnan-isnanf.md)|Controllare il valore a virgola mobile a precisione doppia per NaN \(non un numero\)|[\<caps:sentence id\="tgt97" sentenceid\="18f7dc07d0c506c23f2f7eb89262d274" class\="tgtSentence"\>System::Double::IsNan\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.double.isnan.aspx)|  
|[labs](../misc/labs-llabs.md)|Restituire il valore assoluto di `long`|[\<caps:sentence id\="tgt100" sentenceid\="9594ba199e25e9de6b463c8efc9fbe95" class\="tgtSentence"\>System::Math::Abs\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.abs.aspx)|  
|[ldexp](../c-runtime-library/reference/ldexp.md)|Calcolare il prodotto dell'argomento e 2<sup>exp</sup> \(potenza specificata\)|[\<caps:sentence id\="tgt103" sentenceid\="839e85fe5fb98e8520d40a703d06932b" class\="tgtSentence"\>System::Math::Pow\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.pow.aspx)|  
|[ldiv](../c-runtime-library/reference/ldiv-lldiv.md)|Dividere un `long` integer per un altro, restituendo quoziente e resto|Non applicabile.|  
|[log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)|Calcolare logaritmo naturale e in base 10|[System::Math::Log](https://msdn.microsoft.com/en-us/library/system.math.log.aspx), [System::Math::Log10](https://msdn.microsoft.com/en-us/library/system.math.log10.aspx)|  
|[\_logb](../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)|Estrarre il valore esponenziale dell'argomento a virgola mobile a precisione doppia|Non applicabile.|  
|[\_lrotl, \_lrotr](../c-runtime-library/reference/lrotl-lrotr.md)|Spostare `unsigned long int` a sinistra \(`_lrotl`\) o a destra \(`_lrotr`\)|Non applicabile.|  
|[\_matherr](../c-runtime-library/reference/matherr.md)|Gestire gli errori matematici|Non applicabile.|  
|[\_\_max](../c-runtime-library/reference/max.md)|Restituire il più grande di due valori|[\<caps:sentence id\="tgt121" sentenceid\="6f9dcb228534c3e5b0013615b2b1d003" class\="tgtSentence"\>System::Math::Max\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.max.aspx)|  
|[\_\_min](../c-runtime-library/reference/min.md)|Restituire il più piccolo di due valori|[\<caps:sentence id\="tgt124" sentenceid\="ff471983fc666dec7ba58b17a0bf76e6" class\="tgtSentence"\>System::Math::Min\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.min.aspx)|  
|[modf, modff](../c-runtime-library/reference/modf-modff-modfl.md)|Dividere l'argomento in numero intero e frazione|Non applicabile.|  
|[nan, nanf, nanl](../c-runtime-library/reference/nan-nanf-nanl.md)|Restituire un valore NaN non interattivo|[\<caps:sentence id\="tgt129" sentenceid\="c251043405ffa73fe857c83428b58fdc" class\="tgtSentence"\>System::Double::NaN\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.double.nan.aspx)|  
|[\_nextafter](../c-runtime-library/reference/nextafter-functions.md)|Restituire il prossimo vicino rappresentabile|Non applicabile.|  
|[pow, powf](../c-runtime-library/reference/pow-powf-powl.md)|Calcolare il valore elevato a potenza|[\<caps:sentence id\="tgt135" sentenceid\="839e85fe5fb98e8520d40a703d06932b" class\="tgtSentence"\>System::Math::Pow\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.pow.aspx)|  
|[printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|Scrivere dati su `stdout` rispettando il formato specificato|[System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx), [System::Console::WriteLine](https://msdn.microsoft.com/en-us/library/system.console.writeline.aspx)|  
|[rand](../c-runtime-library/reference/rand.md), [rand\_s](../c-runtime-library/reference/rand-s.md)|Ottenere un numero pseudocasuale|[\<caps:sentence id\="tgt141" sentenceid\="00574fde17be9de3e07567ef5abe0110" class\="tgtSentence"\>System::Random Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.random.aspx)|  
|[rint, rintf, rintl](../c-runtime-library/reference/rint-rintf-rintl.md)|Arrotondare all'intero più vicino nel formato a virgola mobile|[\<caps:sentence id\="tgt143" sentenceid\="1c04aeb4aeff1752cb65adabcee29f53" class\="tgtSentence"\>System::Math::Round\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.round.aspx)|  
|[\_rotl, \_rotr](../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)|Spostare `unsigned int` a sinistra \(`_rotl`\) o a destra \(`_rotr`\)|Non applicabile.|  
|[\_scalb](../c-runtime-library/reference/scalb.md)|Elevare l'argomento alla potenza di 2|Non applicabile.|  
|[scalbn, scalbnf, scalbnl, scalbln, scalblnf, scalblnl](../c-runtime-library/reference/scalbn-scalbnf-scalbnl-scalbln-scalblnf-scalblnl.md)|Moltiplicare per la potenza integrale di `FLT_RADIX`|Non applicabile.|  
|[scanf, wscanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md), [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)|Leggere dati da `stdin` nel formato specificato e scriverli nella posizione specificata|[System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx), [System::Console::ReadLine](https://msdn.microsoft.com/en-us/library/system.console.readline.aspx)|  
|[\_set\_controlfp](../c-runtime-library/reference/set-controlfp.md)|Impostare nuovo valore della parola di controllo|Non applicabile.|  
|[sin, sinf, sinh, sinhf](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|Calcolare il seno o il seno iperbolico|[System::Math::Sin](https://msdn.microsoft.com/en-us/library/system.math.sin.aspx), [System::Math::Sinh](https://msdn.microsoft.com/en-us/library/system.math.sinh.aspx)|  
|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|Trovare la radice quadrata|[\<caps:sentence id\="tgt162" sentenceid\="1a91af0bd8c63b4be64c7a0bec8dc8c4" class\="tgtSentence"\>System::Math::Sqrt\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.math.sqrt.aspx)|  
|[srand](../c-runtime-library/reference/srand.md)|Inizializzare serie pseudocasuale|[\<caps:sentence id\="tgt165" sentenceid\="00574fde17be9de3e07567ef5abe0110" class\="tgtSentence"\>System::Random Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.random.aspx)|  
|[\_status87, \_statusfp, \_statusfp2](../c-runtime-library/reference/status87-statusfp-statusfp2.md)|Ottenere parola di stato a virgola mobile|Non applicabile.|  
|[strtod, \_strtod\_l, wcstod, \_wcstod\_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)|Convertire una stringa di caratteri in un valore a precisione doppia|[\<caps:sentence id\="tgt169" sentenceid\="363f8f2cb09f8ca850491a65df66522e" class\="tgtSentence"\>System::Convert::ToDouble\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.convert.todouble.aspx)|  
|[tan, tanf, tanh, tanhf](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|Calcolare la tangente o tangente iperbolica|[System::Math::Tan](https://msdn.microsoft.com/en-us/library/system.math.tan.aspx), [System::Math::Tanh](https://msdn.microsoft.com/en-us/library/system.math.tanh.aspx)|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)