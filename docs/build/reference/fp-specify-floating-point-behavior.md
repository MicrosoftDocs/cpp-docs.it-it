---
title: /fp (Specifica il comportamento della virgola mobile)
ms.date: 11/09/2018
f1_keywords:
- VC.Project.VCCLCompilerTool.floatingPointModel
- VC.Project.VCCLWCECompilerTool.FloatingPointExceptions
- /fp
- VC.Project.VCCLWCECompilerTool.floatingPointModel
- VC.Project.VCCLCompilerTool.FloatingPointExceptions
helpviewer_keywords:
- -fp compiler option [C++]
- /fp compiler option [C++]
ms.assetid: 10469d6b-e68b-4268-8075-d073f4f5d57e
ms.openlocfilehash: 7a8ae885bbbf00ae916505bf5df646b32268a17a
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040912"
---
# <a name="fp-specify-floating-point-behavior"></a>/fp (Specifica il comportamento della virgola mobile)

Specifica il modo in cui il compilatore considera le espressioni a virgola mobile, le ottimizzazioni e le eccezioni. Le opzioni **/FP** specificano se il codice generato consente la modifica dell'ambiente a virgola mobile per la modalità di arrotondamento, le maschere delle eccezioni e il comportamento secondario e se i controlli di stato a virgola mobile restituiscono risultati correnti e accurati. Controlla se il compilatore genera codice che gestisce l'operazione di origine e l'ordinamento delle espressioni ed è conforme allo standard per la propagazione NaN oppure se genera codice più efficiente che può riordinare o combinare operazioni e usare la semplificazione delle trasformazioni algebriche non consentite dallo standard.

## <a name="syntax"></a>Sintassi

> **/FP:**[**precisione**  |  **rigorosa**  |  **veloce**  |  **eccetto**[ **-** ]]

### <a name="arguments"></a>Argomenti

#### <a name="precise"></a>preciso

Per impostazione predefinita, il compilatore usa il `/fp:precise` comportamento.

Con `/fp:precise` il compilatore vengono conservate le proprietà di ordinamento e arrotondamento delle espressioni di origine del codice a virgola mobile quando viene generato e ottimizzato il codice oggetto per il computer di destinazione. Il compilatore Arrotonda alla precisione del codice sorgente in quattro punti specifici durante la valutazione dell'espressione: in corrispondenza di assegnazioni, in cast, quando un argomento a virgola mobile viene passato a una chiamata di funzione e quando un valore a virgola mobile viene restituito da una chiamata di funzione. I calcoli intermedi possono essere eseguiti alla precisione del computer. Cast può essere usato per arrotondare in modo esplicito i calcoli intermedi.

Il compilatore non esegue trasformazioni algebriche sulle espressioni a virgola mobile, ad esempio la riassociazione o la distribuzione, a meno che non sia garantita la produzione di un risultato identico bit per bit.
Le espressioni che coinvolgono valori speciali (NaN, + Infinity,-Infinity,-0,0) vengono elaborate in base alle specifiche IEEE-754. Ad esempio, `x != x` restituisce **`true`** se x è NaN. Le *contrazioni*a virgola mobile, ovvero le istruzioni del computer che combinano operazioni a virgola mobile, possono essere generate in `/fp:precise` .

Il compilatore genera codice progettato per l'esecuzione nell' [ambiente a virgola mobile predefinito](#the-default-floating-point-environment) e presuppone che l'ambiente a virgola mobile non sia accessibile o modificato in fase di esecuzione. Ciò significa che il codice non annulla il mascheramento delle eccezioni a virgola mobile, i registri di stato a virgola mobile in lettura o scrittura o la modifica delle modalità di arrotondamento.

Se il codice a virgola mobile non dipende dall'ordine delle operazioni e delle espressioni nelle istruzioni a virgola mobile (ad esempio, se non si è interessati se `a * b + a * c` viene calcolato come `(b + c) * a` o `2 * a` come `a + a` ), prendere in considerazione l'opzione [/FP: Fast](#fast) , che può produrre codice più veloce e più efficiente. Se il codice dipende dall'ordine delle operazioni e delle espressioni e accede o modifica l'ambiente a virgola mobile (ad esempio, per modificare le modalità di arrotondamento o per intercettare le eccezioni a virgola mobile), usare [/FP: Strict](#strict).

#### <a name="strict"></a>strict

`/fp:strict` ha un comportamento simile a `/fp:precise` , ovvero il compilatore conserva le proprietà di ordinamento e arrotondamento di origine del codice a virgola mobile quando genera e ottimizza il codice oggetto per il computer di destinazione e osserva lo standard durante la gestione di valori speciali. Inoltre, il programma può accedere o modificare l'ambiente a virgola mobile in modo sicuro in fase di esecuzione.

In `/fp:strict` , il compilatore genera codice che consente al programma di annullare il mascheramento delle eccezioni a virgola mobile, leggere o scrivere registri di stato a virgola mobile o modificare le modalità di arrotondamento. Viene arrotondata alla precisione del codice sorgente in quattro punti specifici durante la valutazione dell'espressione: in corrispondenza di assegnazioni, in cast, quando un argomento a virgola mobile viene passato a una chiamata di funzione e quando un valore a virgola mobile viene restituito da una chiamata di funzione. I calcoli intermedi possono essere eseguiti alla precisione del computer. Cast può essere usato per arrotondare in modo esplicito i calcoli intermedi. Il compilatore non esegue trasformazioni algebriche sulle espressioni a virgola mobile, ad esempio la riassociazione o la distribuzione, a meno che non sia garantita la produzione di un risultato identico bit per bit. Le espressioni che coinvolgono valori speciali (NaN, + Infinity,-Infinity,-0,0) vengono elaborate in base alle specifiche IEEE-754. Ad esempio, `x != x` restituisce **`true`** se x è NaN. Le contrazioni a virgola mobile non vengono generate in `/fp:strict` .

`/fp:strict` è più costoso dal punto di vista `/fp:precise` del calcolo perché il compilatore deve inserire istruzioni aggiuntive per intercettare le eccezioni e consentire ai programmi di accedere o modificare l'ambiente a virgola mobile in fase di esecuzione. Se il codice non usa questa funzionalità, ma richiede l'ordinamento e l'arrotondamento del codice sorgente oppure si basa su valori speciali, usare `/fp:precise` . In caso contrario, è consigliabile usare `/fp:fast` , che può produrre codice più veloce e più piccolo.

#### <a name="fast"></a>veloce

L' `/fp:fast` opzione consente al compilatore di riordinare, combinare o semplificare le operazioni a virgola mobile per ottimizzare il codice a virgola mobile per la velocità e lo spazio. Il compilatore può omettere l'arrotondamento in corrispondenza di istruzioni di assegnazione, cast o chiamate di funzione. Può riordinare le operazioni o eseguire trasformazioni algebriche, ad esempio tramite l'uso di Leggi associative e distributive, anche se tali trasformazioni hanno come risultato un comportamento di arrotondamento in modo osservabile. Grazie a questa ottimizzazione avanzata, il risultato di alcuni calcoli a virgola mobile può essere diverso da quelli prodotti da altre `/fp` Opzioni. I valori speciali (NaN, + Infinity,-Infinity,-0,0) non possono essere propagati o comportarsi rigorosamente in base allo standard IEEE-754. Le contrazioni a virgola mobile possono essere generate in `/fp:fast` . Il compilatore è ancora associato all'architettura sottostante in `/fp:fast` e le ottimizzazioni aggiuntive possono essere disponibili tramite l'opzione [/Arch](arch-minimum-cpu-architecture.md) .

In `/fp:fast` il compilatore genera codice progettato per l'esecuzione nell'ambiente a virgola mobile predefinito e presuppone che l'ambiente a virgola mobile non sia accessibile o modificato in fase di esecuzione. Ciò significa che il codice non annulla il mascheramento delle eccezioni a virgola mobile, i registri di stato a virgola mobile in lettura o scrittura o la modifica delle modalità di arrotondamento.

`/fp:fast` è destinato a programmi che non richiedono un ordinamento rigoroso del codice sorgente e l'arrotondamento delle espressioni a virgola mobile e che non si basano sulle regole standard per la gestione di valori speciali, ad esempio NaN. Se il codice a virgola mobile richiede la conservazione dell'ordinamento e dell'arrotondamento del codice sorgente oppure si basa sul comportamento standard di valori speciali, usare [/FP: precise](#precise). Se il codice accede o modifica l'ambiente a virgola mobile per modificare le modalità di arrotondamento, annullare il mascheramento delle eccezioni a virgola mobile o controllare lo stato a virgola mobile, usare [/FP: Strict](#strict).

#### <a name="except"></a>except

L' `/fp:except` opzione genera il codice per garantire che tutte le eccezioni a virgola mobile senza maschera vengano generate nel momento esatto in cui si verificano e che non vengano generate eccezioni a virgola mobile aggiuntive. Per impostazione predefinita, l' `/fp:strict` opzione Abilita `/fp:except` e non `/fp:precise` . L' `/fp:except` opzione non è compatibile con `/fp:fast` . L'opzione può essere disabilitata in modo esplicito da Microsoft `/fp:except-` .

Si noti che non `/fp:except` Abilita alcuna eccezione a virgola mobile, ma è necessaria per consentire ai programmi di abilitare le eccezioni a virgola mobile. Vedere [_controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md) per informazioni su come abilitare le eccezioni a virgola mobile.

## <a name="remarks"></a>Commenti

`/fp`È possibile specificare più opzioni nella stessa riga di comando del compilatore. Solo una delle `/fp:strict` `/fp:fast` Opzioni, e `/fp:precise` può essere applicata alla volta. Se nella riga di comando viene specificata più di una di queste opzioni, l'opzione successiva avrà la precedenza e il compilatore genererà un avviso. Le `/fp:strict` `/fp:except` Opzioni e non sono compatibili con `/clr` .

L'opzione [/za](za-ze-disable-language-extensions.md) (compatibilità ANSI) non è compatibile con `/fp` .

### <a name="using-compiler-directives-to-control-floating-point-behavior"></a>Uso delle direttive del compilatore per controllare il comportamento della virgola mobile

Il compilatore fornisce tre direttive pragma per eseguire l'override del comportamento a virgola mobile specificato nella riga di comando: [float_control](../../preprocessor/float-control.md), [fenv_access](../../preprocessor/fenv-access.md)e [fp_contract](../../preprocessor/fp-contract.md). È possibile usare queste direttive per controllare il comportamento della virgola mobile a livello di funzione, non all'interno di una funzione. Si noti che queste direttive non corrispondono direttamente alle `/fp` Opzioni. In questa tabella viene illustrato il `/fp` mapping tra le direttive Options e pragma. Per ulteriori informazioni, vedere la documentazione per le singole opzioni e le direttive pragma.

| Opzione | float_control (preciso) | float_control (eccetto) | fenv_access | fp_contract |
|-|-|-|-|-|
|`/fp:fast`|spento|spento|spento|on|
|`/fp:precise`|in|spento|spento|on|
|`/fp:strict`|on|on|in|spento|

### <a name="the-default-floating-point-environment"></a>Ambiente a virgola mobile predefinito

Quando viene inizializzato un processo, viene impostato l' *ambiente a virgola mobile predefinito* . Questo ambiente maschera tutte le eccezioni a virgola mobile, imposta la modalità di arrotondamento su Arrotonda al più vicino ( `FE_TONEAREST` ), conserva i valori subnormali (denormali), usa la precisione predefinita di separatore (mantissa) per **`float`** **`double`** i valori, e **`long double`** e, se supportato, imposta il controllo Infinity sulla modalità affinità predefinita.

### <a name="floating-point-environment-access-and-modification"></a>Accesso e modifica dell'ambiente a virgola mobile

Il runtime di Microsoft Visual C++ offre diverse funzioni per l'accesso e la modifica dell'ambiente a virgola mobile. Sono inclusi [_controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md), [_clearfp](../../c-runtime-library/reference/clear87-clearfp.md)e [_statusfp](../../c-runtime-library/reference/status87-statusfp-statusfp2.md) e le relative varianti. Per garantire un comportamento corretto del programma quando il codice accede o modifica l'ambiente a virgola mobile, `fenv_access` deve essere abilitato, tramite l' `/fp:strict` opzione o usando il `fenv_access` pragma, affinché queste funzioni abbiano effetto. Quando `fenv_access` non è abilitato, l'accesso o la modifica dell'ambiente a virgola mobile può comportare un comportamento imprevisto del programma: il codice potrebbe non rispettare le modifiche richieste all'ambiente a virgola mobile. i registri di stato a virgola mobile potrebbero non segnalare i risultati previsti o correnti. potrebbero verificarsi eccezioni a virgola mobile impreviste oppure potrebbero non essere presenti eccezioni a virgola mobile.

Quando il codice accede o modifica l'ambiente a virgola mobile, è necessario prestare attenzione quando si combina il codice `fenv_access` in cui è abilitato con il codice che non è `fenv_access` abilitato. Nel codice in cui `fenv_access` non è abilitato, il compilatore presuppone che l'ambiente a virgola mobile predefinito della piattaforma sia attivo e che lo stato della virgola mobile non sia accessibile o modificato. È consigliabile salvare e ripristinare lo stato predefinito dell'ambiente a virgola mobile locale prima che il controllo venga trasferito a una funzione che non è stata `fenv_access` abilitata. Questo esempio illustra come `float_control` è possibile impostare e ripristinare il pragma:

```cpp
#pragma float_control(strict, on, push)
// Code that uses /fp:strict mode
#pragma float_control(pop)
```

### <a name="floating-point-rounding-modes"></a>Modalità di arrotondamento a virgola mobile

In entrambi `/fp:precise` i tipi e `/fp:fast` il compilatore genera codice progettato per l'esecuzione nell'ambiente a virgola mobile predefinito e presuppone che l'ambiente non sia accessibile o modificato in fase di esecuzione. Ciò significa che il codice non annulla il mascheramento delle eccezioni a virgola mobile, i registri di stato a virgola mobile in lettura o scrittura o la modifica delle modalità di arrotondamento.  Tuttavia, alcuni programmi devono modificare l'ambiente a virgola mobile. Questo esempio calcola, ad esempio, i limiti di errore di una moltiplicazione a virgola mobile mediante la modifica delle modalità di arrotondamento a virgola mobile:

```cpp
// fp_error_bounds.cpp
#include <iostream>
#include <limits>
using namespace std;

int main(void)
{
    float a = std::<float>::max();
    float b = -1.1;
    float cLower = 0.0;
    float cUpper = 0.0;
    unsigned int control_word = 0;
    int err = 0;

    // compute lower error bound.
    // set rounding mode to -infinity.
    err = _controlfp_s(&control_word, _RC_DOWN, _MCW_RC);
    if (err)
    {
        cout << "_controlfp_s(&control_word, _RC_DOWN, _MCW_RC) failed with error:" << err << endl;
    }  
    cLower = a * b;

    // compute upper error bound.
    // set rounding mode to +infinity.
    err = _controlfp_s(&control_word, _RC_UP, _MCW_RC);
    if (err)
    {
        cout << "_controlfp_s(&control_word, _RC_UP, _MCW_RC) failed with error:" << err << endl;
    }
    cUpper = a * b;

    // restore default rounding mode.
    err = _controlfp_s(&control_word, _CW_DEFAULT, _MCW_RC);
    if (err)
    {
        cout << "_controlfp_s(&control_word, _CW_DEFAULT, _MCW_RC) failed with error:" << err << endl;
    }
    // display error bounds.
    cout << "cLower = " << cLower << endl;
    cout << "cUpper = " << cUpper << endl;
    return 0;
}
```

Poiché il compilatore presuppone l'ambiente a virgola mobile predefinito in `/fp:fast` ed `/fp:precise` è libero di ignorare le chiamate a `_controlfp_s` . Ad esempio, in caso di compilazione tramite `/O2` e `/fp:precise` per l'architettura x86, i limiti non vengono calcolati e il programma di esempio restituisce:

```Output
cLower = -inf
cUpper = -inf
```

Quando viene compilato con `/O2` e `/fp:strict` per l'architettura x86, il programma di esempio restituisce:

```Output
cLower = -inf
cUpper = -3.40282e+38
```

### <a name="floating-point-special-values"></a>Valori speciali a virgola mobile

In `/fp:precise` e `/fp:strict` , le espressioni che coinvolgono valori speciali (Nan, + Infinity,-Infinity,-0,0) si comportano in base alle specifiche IEEE-754. In `/fp:fast` il comportamento di questi valori speciali potrebbe non essere coerente con IEEE-754.

In questo esempio viene illustrato il comportamento diverso di valori speciali in `/fp:precise` `/fp:strict` e `/fp:fast` :

```cpp
// fp_special_values.cpp
#include <stdio.h>
#include <cmath>

float gf0 = -0.0;

int main()
{
    float f1 = INFINITY;
    float f2 = NAN;
    float f3 = -INFINITY;
    bool a, b;
    float c, d, e;
    a = (f1 == f1);
    b = (f2 == f2);
    c = (f1 - f1);
    d = (f2 - f2);
    printf("INFINITY == INFINITY : %d\n", a);
    printf("NAN == NAN           : %d\n", b);
    printf("INFINITY - INFINITY  : %f\n", c);
    printf("NAN - NAN            : %f\n", d);

    e = gf0 / abs(f3);
    printf("std::signbit(-0.0/-INFINITY): %d\n", std::signbit(c));
    return 0;
}
```

Quando viene compilato con `/O2` `/fp:precise` o `/O2` `/fp:strict` per l'architettura x86, gli output sono coerenti con la specifica IEEE-754:

```Output
INFINITY == INFINITY : 1
NAN == NAN           : 0
INFINITY - INFINITY  : -nan(ind)
NAN - NAN            : -nan(ind)
std::signbit(-0.0/-INFINITY): 1
```

Quando viene compilato con `/O2` `/fp:fast` per l'architettura x86, gli output non sono coerenti con IEEE-754:

```Output
INFINITY == INFINITY : 1
NAN == NAN           : 1
INFINITY - INFINITY  : 0.000000
NAN - NAN            : 0.000000
std::signbit(-0.0/-INFINITY): 0
```

### <a name="floating-point-algebraic-transformations"></a>Trasformazioni algebriche a virgola mobile

In `/fp:precise` e `/fp:strict` il compilatore non esegue trasformazioni matematiche, a meno che non sia garantita la generazione di un risultato identico bit per bit. Il compilatore può eseguire tali trasformazioni in `/fp:fast` . Ad esempio, l'espressione `a * b + a * c` nella funzione di esempio `algebraic_transformation` può essere compilata in `a * (b + c)` `/fp:fast` . Tali trasformazioni non vengono eseguite in `/fp:precise` o `/fp:strict` e il compilatore genera `a * b + a * c` .

```cpp
float algebraic_transformation (float a, float b, float c)
{
    return a * b + a * c;
}
```

### <a name="floating-point-explicit-casting-points"></a>Punti di cast espliciti a virgola mobile

In `/fp:precise` e `/fp:strict` il compilatore Arrotonda alla precisione del codice sorgente in quattro punti specifici durante la valutazione dell'espressione: alle assegnazioni, in cast, quando un argomento a virgola mobile viene passato a una chiamata di funzione e quando viene restituito un valore a virgola mobile da una chiamata di funzione. Cast può essere usato per arrotondare in modo esplicito i calcoli intermedi. In `/fp:fast` il compilatore non genera cast espliciti in questi punti per garantire la precisione del codice sorgente. In questo esempio viene illustrato il comportamento con diverse `/fp` Opzioni:

```cpp
float casting(float a, float b)
{
    return 5.0*((double)(a+b));
}
```

Quando viene compilato tramite `/O2` `/fp:precise` o `/O2` `/fp:strict` , è possibile osservare che i cast di tipo espliciti vengono inseriti sia in typecast che nel punto di ritorno della funzione nel codice generato per l'architettura x64:

```asm
        addss    xmm0, xmm1
        cvtss2sd xmm0, xmm0
        mulsd    xmm0, QWORD PTR __real@4014000000000000
        cvtsd2ss xmm0, xmm0
        ret      0
```

`/O2` `/fp:fast` Il codice generato è semplificato, perché tutti i cast di tipo sono ottimizzati:

```asm
        addss    xmm0, xmm1
        mulss    xmm0, DWORD PTR __real@40a00000
        ret      0
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione**delle  >  proprietà di generazione del codice**C/C++**  >  **Code Generation** .

1. Modificare la proprietà del **modello a virgola mobile** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.floatingPointModel%2A>.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)<br/>
