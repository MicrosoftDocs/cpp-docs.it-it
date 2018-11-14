---
title: /fp (specifica il comportamento a virgola mobile)
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
ms.openlocfilehash: 78abe5e3b491ec0d658a40628dadc81e334c212f
ms.sourcegitcommit: d94714522428834a02ede6e6884572f0f6ca9824
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2018
ms.locfileid: "51597538"
---
# <a name="fp-specify-floating-point-behavior"></a>/fp (specifica il comportamento a virgola mobile)

Specifica il modo in cui il compilatore considera le eccezioni, le ottimizzazioni e le espressioni a virgola mobile. Il **/fp** opzioni consentono di specificare se il codice generato consente l'ambiente a virgola mobile viene modificato per la modalità di arrotondamento, maschere di eccezione e comportamento subnormal, e se i controlli di stato a virgola mobile restituiscono corrente, accurate risultati. Controlla se il compilatore genera codice che gestisce l'operazione del codice sorgente e l'espressione di ordinamento ed è conforme allo standard per la propagazione di NaN, o se viene invece generato un codice più efficiente che potrebbe riordinare o combinare le operazioni e usano la semplificazione trasformazioni algebriche che non sono consentite dallo standard.

## <a name="syntax"></a>Sintassi

> **/fp:**[**preciso** | **strict** | **veloce** | **tranne**[ **-**]]

### <a name="arguments"></a>Argomenti

#### <a name="precise"></a>Precisa

Per impostazione predefinita, il compilatore Usa **/fp: precise** comportamento.

Sotto **/fp: precise** il compilatore deve mantenere l'espressione di origine di ordinamento e proprietà del codice a virgola mobile di arrotondamento quando vengono generati e ottimizza il codice oggetto per la macchina di destinazione. Il compilatore viene arrotondato alla precisione di codice sorgente in quattro punti specifici durante la valutazione dell'espressione: in assegnazioni, in typecast, quando viene passato un argomento a virgola mobile a una chiamata di funzione e quando un valore a virgola mobile e viene restituito da una chiamata di funzione. È possibile eseguire i calcoli intermedi nella precisione di macchina. Typecast utilizzabile per l'arrotondamento in modo esplicito i calcoli intermedi.

Il compilatore non esegue le trasformazioni algebriche su espressioni a virgola mobile, ad esempio la riassociazione o la distribuzione, a meno che non è garantita la trasformazione per produrre un risultato identico bit per bit.
Le espressioni che prevedono valori speciali (NaN, + infinity, - infinity, -0,0) vengono elaborate in base alle specifiche IEEE 754. Ad esempio, `x != x` restituisca **true** se x è NaN. A virgola mobile *contrazioni*, vale a dire, istruzioni macchina che combinano operazioni a virgola mobile, può essere generato in **/fp: precise**.

Il compilatore genera il codice deve essere eseguita [ambiente a virgola mobile predefinita](#the-default-floating-point-environment) e presuppone che l'ambiente a virgola mobile non è accessibile o modificato in fase di esecuzione. Vale a dire, si presuppone che il codice non annullare il mascheramento delle eccezioni a virgola mobile, leggere o scrivere i registri di stato a virgola mobile o modificare le modalità di arrotondamento.

Se il codice a virgola mobile e dipende dall'ordine di operazioni e le espressioni nelle istruzioni a virgola mobile (ad esempio, se non è importante se `a * b + a * c` viene calcolato come `(b + c) * a` oppure `2 * a` come `a + a`), prendere in considerazione il [/fp: fast](#fast) opzione, che può produrre codice più veloce e più efficiente. Se il codice sia dipende dall'ordine operazioni e le espressioni e accede o modifica l'ambiente a virgola mobile (ad esempio, per modificare la modalità di arrotondamento o per intercettare le eccezioni a virgola mobile), usare [/fp: strict](#strict).

#### <a name="strict"></a>strict

**/fp: strict** ha un comportamento simile a **/fp: precise**, vale a dire, il compilatore deve mantenere l'ordine delle origini e arrotondamento delle proprietà del codice a virgola mobile e quando vengono generati e ottimizza il codice per la macchina di destinazione dell'oggetto e osserva lo standard quando la gestione dei valori speciali. Inoltre, il programma potrebbe accedere o modificare l'ambiente a virgola mobile in fase di esecuzione.

Sotto **/fp: strict**, il compilatore genera codice che consente al programma in modo sicuro disabilitare il mascheramento delle eccezioni a virgola mobile, leggere o scrivere i registri di stato a virgola mobile o modificare le modalità di arrotondamento. Viene arrotondato alla precisione di codice sorgente in quattro punti specifici durante la valutazione dell'espressione: in assegnazioni, in typecast, quando viene passato un argomento a virgola mobile a una chiamata di funzione e quando un valore a virgola mobile e viene restituito da una chiamata di funzione. È possibile eseguire i calcoli intermedi nella precisione di macchina. Typecast utilizzabile per l'arrotondamento in modo esplicito i calcoli intermedi. Il compilatore non esegue le trasformazioni algebriche su espressioni a virgola mobile, ad esempio la riassociazione o la distribuzione, a meno che non è garantita la trasformazione per produrre un risultato identico bit per bit. Le espressioni che prevedono valori speciali (NaN, + infinity, - infinity, -0,0) vengono elaborate in base alle specifiche IEEE 754. Ad esempio, `x != x` restituisca **true** se x è NaN. Riduzioni a virgola mobile non vengono generati in **/fp: strict**.

**/fp: strict** è un'operazione più costosa rispetto **/fp: precise** perché il compilatore deve inserire istruzioni aggiuntive per intercettare le eccezioni e consentire ai programmi di accedere o modificare l'ambiente a virgola mobile in fase di esecuzione. Se il codice non usa questa funzionalità, ma richiede l'ordinamento di codice sorgente e arrotondamento o si basa su valori speciali, usare **/fp: precise**. In caso contrario, è consigliabile usare **/fp: fast**, che può produrre codice più veloce e più piccolo.

#### <a name="fast"></a>Fast

Il **/fp: fast** opzione consente al compilatore di riordinare, combinare o semplificare le operazioni a virgola mobile e per ottimizzare il codice a virgola mobile e per velocità e spazio. Il compilatore può omettere l'arrotondamento in istruzioni di assegnazione, typecast o chiamate di funzione. Può riordinare le operazioni o eseguire, ad esempio, trasformazioni algebriche, mediante l'utilizzo di leggi associative e distributive, anche se tali trasformazioni comportano il comportamento di arrotondamento diverso impatta in maniera visibile. A causa di questa ottimizzazione avanzata, il risultato di alcuni calcoli a virgola mobile può differire da quelle generate da altri **/fp** opzioni. Valori speciali (NaN, + infinity, - infinity, -0,0) non possono essere propagati o si comportano esattamente in base allo standard IEEE 754. Riduzioni a virgola mobile possono essere generate sotto **/fp: fast**. Il compilatore è ancora associato per l'architettura sottostante sotto **/fp: fast**, e ottimizzazioni aggiuntive potrebbero essere disponibili tramite l'uso delle [/arch](../../build/reference/arch-minimum-cpu-architecture.md) opzione.

Sotto **/fp: fast**, il compilatore genera il codice deve essere eseguita nell'ambiente a virgola mobile predefinito e si presuppone che l'ambiente a virgola mobile non è accessibile o modificato in fase di esecuzione. Vale a dire, si presuppone che il codice non annullare il mascheramento delle eccezioni a virgola mobile, leggere o scrivere i registri di stato a virgola mobile o modificare le modalità di arrotondamento.

**/fp: fast** è destinato ai programmi che non richiedono codice di origine strict ordinamento e di arrotondamento di espressioni a virgola mobile e non fare affidamento sulle regole standard per la gestione dei valori speciali, ad esempio NaN. Se il codice a virgola mobile è necessaria la conservazione del codice sorgente di ordinamento e di arrotondamento o si basa sul comportamento standard di valori speciali, usare [/fp: precise](#precise). Se il codice accede o modifica l'ambiente a virgola mobile e per modificare la modalità di arrotondamento, disabilitare il mascheramento delle eccezioni a virgola mobile, o controllare lo stato a virgola mobile, utilizzare [/fp: strict](#strict).

#### <a name="except"></a>except

Il **/fp: tranne** opzione genera codice per garantire che tutte le eccezioni a virgola mobile non mascherate vengono generate in corrispondenza del punto esatto in cui si verificano e che nessun ulteriori eccezioni a virgola mobile vengono generati. Per impostazione predefinita, il **/fp: strict** opzione Abilita **/fp: eccetto**, e **/fp: precise** non. Il **/fp: tranne** opzione non è compatibile con **/fp: fast**. L'opzione può essere disabilitata in modo esplicito da ci **/fp: eccetto-**.

Si noti che **/fp: tranne** non abilita tutte le eccezioni a virgola mobile da solo, ma è obbligatorio per i programmi consentire alle eccezioni a virgola mobile. Visualizzare [controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md) per informazioni su come abilitare le eccezioni a virgola mobile.

## <a name="remarks"></a>Note

Più **/fp** possono specificare le opzioni nella riga di comando del compilatore stesso. Solo uno dei **/fp: strict**, **/fp: fast**, e **/fp: precise** opzioni possono essere attiva alla volta. Se più di una di queste opzioni viene specificata nella riga di comando, l'opzione successiva ha la precedenza e il compilatore genera un avviso. Il **/fp: strict** e **/fp: eccetto** non sono compatibili con le opzioni **/clr**.

Il [/Za](../../build/reference/za-ze-disable-language-extensions.md) opzione (compatibilità ANSI) non è compatibile con **/fp**.

### <a name="using-pragmas-to-control-floating-point-behavior"></a>Utilizzando i pragma per controllare il comportamento a virgola mobile

Il compilatore fornisce tre directivess pragma per eseguire l'override del comportamento a virgola mobile specificato nella riga di comando: [float_control](../../preprocessor/float-control.md), [fenv_access](../../preprocessor/fenv-access.md), e [fp_contract](../../preprocessor/fp-contract.md). È possibile usare questi pragma per controllare il comportamento a virgola mobile a livello di funzione, non all'interno di una funzione. Si noti che questi pragma non corrispondono direttamente al **/fp** opzioni. La tabella seguente mostra come la **/fp** pragma e opzioni di eseguire il mapping tra loro. Per altre informazioni, vedere la documentazione per le singole opzioni e il pragma.

||float_control(precise)|float_control(except)|fenv_access|fp_contract|
|-|-|-|-|-|
|**/fp: fast**|Off|Off|Off|attivo|
|**/fp: precise**|attivo|Off|Off|attivo|
|**/fp: tranne**|attivo|attivo|attivo|Off|

### <a name="the-default-floating-point-environment"></a>L'ambiente a virgola mobile predefinita

Quando viene inizializzato un processo, il *ambiente a virgola mobile predefinita* è impostata. Questo ambiente le eccezioni a virgola mobile a tutte le maschere, imposta la modalità di arrotondamento per l'arrotondamento al più vicino (`FE_TONEAREST`), consente di mantenere subnormal (denormalizzato) valori, viene utilizzata la precisione predefinita del significando (mantissa) per **float**, **doppie**, e **long double** valori e se supportati, imposta il controllo infinito per la modalità predefinita per affine o meno.

### <a name="floating-point-environment-access-and-modification"></a>Modifica e l'accesso all'ambiente a virgola mobile

Il runtime di Microsoft Visual C++ offre diverse funzioni per accedere e modificare l'ambiente a virgola mobile. Questi includono [controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md), [clearfp](../../c-runtime-library/reference/clear87-clearfp.md), e [statusfp](../../c-runtime-library/reference/status87-statusfp-statusfp2.md) e le relative varianti. Per garantire il comportamento corretto del programma quando il codice accede o modifica l'ambiente a virgola mobile, `fenv_access` deve essere abilitato, ovvero per il **/fp: strict** opzione o dall'uso del `fenv_access` pragma, per queste funzioni per ha effetto. Quando si `fenv_access` non è abilitata, l'accesso o la modifica dell'ambiente a virgola mobile può comportare il comportamento del programma imprevisto: codice potrà non rispettare le modifiche richieste per l'ambiente a virgola mobile; i registri di stato a virgola mobile potrebbero non segnalare risultati previsti o correnti. e possono verificarsi eccezioni a virgola mobile impreviste o potrebbero non verificarsi eccezioni a virgola mobile previste.

Quando il codice accede o modifica l'ambiente a virgola mobile, è necessario prestare attenzione quando si combina codice in cui `fenv_access` sia abilitato con codice che non dispone `fenv_access` abilitata. Nel codice in cui `fenv_access` non è abilitato, il compilatore presuppone che l'ambiente a virgola mobile predefinita della piattaforma è attiva e che lo stato a virgola mobile non è accessibile o modificato. Si consiglia di salvare e ripristinare l'ambiente a virgola mobile e locale allo stato predefinito prima che il controllo viene trasferito a una funzione che non ha `fenv_access` abilitata. Questo esempio viene illustrato come il `float_control` pragma può essere impostato e ripristinato:

```cpp
#pragma float_control(strict, on, push)
// Code that uses /fp:strict mode
#pragma float_control(pop)
```

### <a name="floating-point-rounding-modes"></a>Modalità di arrotondamento a virgola mobile

In entrambi **/fp: precise** e **/fp: fast** il compilatore genera il codice deve essere eseguita nell'ambiente a virgola mobile predefinito e si presuppone che l'ambiente non è accessibile o modificato in fase di esecuzione. Vale a dire, si presuppone che il codice non annullare il mascheramento delle eccezioni a virgola mobile, leggere o scrivere i registri di stato a virgola mobile o modificare le modalità di arrotondamento.  Tuttavia, alcuni programmi necessario modificare l'ambiente a virgola mobile. Ad esempio, in questo esempio calcola i limiti di errore di una moltiplicazione a virgola mobile e modificando la modalità di arrotondamento a virgola mobile:

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

Poiché il compilatore presuppone che il valore predefinito in ambiente a virgola mobile **/fp: fast** e **/fp: precise** è gratuito ignorare le chiamate a `_controlfp_s`. Ad esempio, quando compilato con entrambe **/O2** e **/fp: precise** per x86 architettura, non vengono calcolati i limiti e l'output del programma di esempio:

```Output
cLower = -inf
cUpper = -inf
```

Quando viene compilato con entrambe **/O2** e **/fp: strict** per x86 architettura, l'output del programma di esempio:

```Output
cLower = -inf
cUpper = -3.40282e+38
```

### <a name="floating-point-special-values"></a>Valori speciali a virgola mobile

Sotto **/fp: precise** e **/fp: strict**, le espressioni che prevedono valori speciali (NaN, + infinity, - infinity, -0,0) si comportano in base alle specifiche IEEE 754. Sotto **/fp: fast**, il comportamento di questi valori speciali potrebbe essere incoerente con IEEE 754.

Questo esempio viene illustrato il diverso comportamento dei valori speciali sotto **/fp: precise**, **/fp: strict** e **/fp: fast**:

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

Quando viene compilato con **/O2** **/fp: precise** oppure **/O2** **/fp: strict** per x86 architettura, gli output siano coerenti con IEEE 754 specifica:

```Output
INFINITY == INFINITY : 1
NAN == NAN           : 0
INFINITY - INFINITY  : -nan(ind)
NAN - NAN            : -nan(ind)
std::signbit(-0.0/-INFINITY): 1
```

Quando viene compilato con **/O2** **/fp: fast** per x86 architettura, l'output non sono conformi allo standard IEEE 754:

```Output
INFINITY == INFINITY : 1
NAN == NAN           : 1
INFINITY - INFINITY  : 0.000000
NAN - NAN            : 0.000000
std::signbit(-0.0/-INFINITY): 0
```

### <a name="floating-point-algebraic-transformations"></a>Trasformazioni algebriche a virgola mobile

Sotto **/fp: precise** e **/fp: strict**, il compilatore non esegue le trasformazioni di matematiche, a meno che la trasformazione genera sicuramente un bit per bit risultati identico. Il compilatore può eseguire tali trasformazioni sotto **/fp: fast**. Ad esempio, l'espressione `a * b + a * c` nella funzione di esempio `algebraic_transformation` può essere compilato in `a * (b + c)` sotto **/fp: fast**. Tali trasformazioni non vengono eseguiti sotto **/fp: precise** oppure **/fp: strict**, e il compilatore genera `a * b + a * c`.

```cpp
float algebraic_transformation (float a, float b, float c)
{
    return a * b + a * c;
}
```

### <a name="floating-point-explicit-casting-points"></a>Punti di eseguire il cast esplicito a virgola mobile

Sotto **/fp: precise** e **/fp: strict**, il compilatore viene arrotondato alla precisione di codice sorgente in quattro punti specifici durante la valutazione dell'espressione: in assegnazioni, in typecast quando un argomento a virgola mobile viene passato a una chiamata di funzione e quando viene restituito un valore a virgola mobile da una chiamata di funzione. Typecast utilizzabile per l'arrotondamento in modo esplicito i calcoli intermedi. Sotto **/fp: fast**, il compilatore non genera cast espliciti in questi punti per garantire la precisione di codice sorgente. Questo esempio viene illustrato il comportamento in differenti **/fp** opzioni:

```cpp
float casting(float a, float b)
{
    return 5.0*((double)(a+b));
}
```

Quando viene compilato usando **/O2** **/fp: precise** o **/O2** **/fp: strict**, è possibile visualizzare i cast di tipo espliciti vengono inseriti in entrambi i cast di tipo e la funzione restituisca punto nel codice generato per x64 architettura:

```asm
        addss    xmm0, xmm1
        cvtss2sd xmm0, xmm0
        mulsd    xmm0, QWORD PTR __real@4014000000000000
        cvtsd2ss xmm0, xmm0
        ret      0
```

Sotto **/O2** **/fp: fast** viene semplificato il codice generato, perché tutti i cast di tipo sono ottimizzati:

```asm
        addss    xmm0, xmm1
        mulss    xmm0, DWORD PTR __real@40a00000
        ret      0
```

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **Code Generation** pagina delle proprietà.

1. Modificare il **modello virgola mobile** proprietà.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.floatingPointModel%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](setting-compiler-options.md)<br/>
[Microsoft Visual C++ ottimizzazione virgola mobile](floating-point-optimization.md)<br/>
