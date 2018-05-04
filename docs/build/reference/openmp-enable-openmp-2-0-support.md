---
title: -openmp (abilitare il supporto OpenMP 2.0) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /openmp
- VC.Project.VCCLCompilerTool.OpenMP
dev_langs:
- C++
helpviewer_keywords:
- /openmp compiler option [C++]
- -openmp compiler option [C++]
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fe64011f48255a18aa8f8ccab7571533540a598a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="openmp-enable-openmp-20-support"></a>/openmp (Attiva supporto OpenMP 2.0)
Indica al compilatore di elaborare `#pragma` [omp](../../preprocessor/omp.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
/openmp  
```  
  
## <a name="remarks"></a>Note  
 `#pragma omp` è possibile impostare [direttive](../../parallel/openmp/reference/openmp-directives.md) e [clausole](../../parallel/openmp/reference/openmp-clauses.md). Se **/openmp** non è specificato in una compilazione, il compilatore ignora clausole OpenMP e direttive. [Funzione OpenMP](../../parallel/openmp/reference/openmp-functions.md) chiamate vengono elaborate dal compilatore anche se **/openmp** non è specificato.  
  
 Le applicazioni compilate con **/openmp** e **/clr** può essere eseguito solo in un singolo dominio processo applicazione; non sono supportati più domini applicazione. Ovvero, quando viene eseguito il costruttore del modulo (. cctor), rileverà il processo viene compilato con **/openmp** e se l'applicazione viene caricato in un runtime non predefinito. Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md), [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md), e [inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).  
  
 Se si tenta di caricare un'applicazione compilata con **/openmp** e **/clr** in un dominio applicazione non predefinito, un <xref:System.TypeInitializationException> verrà generata l'eccezione all'esterno del debugger e un Verrà generata l'eccezione OpenMPWithMultipleAppdomainsException all'interno del debugger.  
  
 Queste eccezioni possono essere generate anche nelle situazioni seguenti:  
  
-   Se l'applicazione compilata con **/clr**, ma non con **/openmp**, viene caricata in un dominio applicazione non predefinito, in cui il processo include un'applicazione compilata con **/ OpenMP**.  
  
-   Se si passa il **/clr** applicazione a un'utilità, ad esempio regasm.exe ([Regasm.exe (strumento di registrazione di Assembly)](/dotnet/framework/tools/regasm-exe-assembly-registration-tool)), che carica i relativi assembly di destinazione in un dominio applicazione non predefinito.  
  
 Sicurezza dall'accesso di codice di common language runtime non funziona nelle aree OpenMP. Se si applica un attributo di protezione accesso di codice CLR all'esterno di un'area parallela, non sarà attivo in tale area.  
  
 Si consiglia di non scrivere **/openmp** applicazioni che consente di parzialmente attendibili i chiamanti, utilizzando <xref:System.Security.AllowPartiallyTrustedCallersAttribute>, o qualsiasi attributo di protezione accesso di codice CLR.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **C/C++** nodo.  
  
4.  Selezionare il **Language** pagina delle proprietà.  
  
5.  Modificare il **supporto OpenMP** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente mostra alcuni degli effetti dell'avvio di threadpool piuttosto che utilizzare il pool di thread dopo l'avvio. Presupponendo un x64, singolo core, processore doppio threadpool richiede circa 16 ms all'avvio. Dopo che è tuttavia molto ridotto i costi per il pool di thread.  
  
 Quando esegue la compilazione con **/openmp**, la seconda chiamata a test2 non viene mai eseguito un tempo superiore se la compilazione con **/openmp-**, perché non esiste alcun avvio del pool di thread. Un milione di iterazioni di **/openmp** versione è più veloce la **/openmp-** versione per la seconda chiamata a test2, mentre a 25 iterazioni **/openmp-** e **/openmp** register versioni inferiori alla granularità dell'orologio.  
  
 Se si dispone di un solo ciclo nell'applicazione viene eseguita in meno di 15 ms (regolati per il sovraccarico approssimativo sul computer), pertanto **/openmp** potrebbe non essere appropriato, ma se è che, è opportuno considerare l'uso **/openmp**.  
  
```  
// cpp_compiler_options_openmp.cpp  
#include <omp.h>  
#include <stdio.h>  
#include <stdlib.h>  
#include <windows.h>  
  
volatile DWORD dwStart;  
volatile int global = 0;  
  
double test2(int num_steps) {  
   int i;  
   global++;  
   double x, pi, sum = 0.0, step;  
  
   step = 1.0 / (double) num_steps;  
  
   #pragma omp parallel for reduction(+:sum) private(x)  
   for (i = 1; i <= num_steps; i++) {  
      x = (i - 0.5) * step;  
      sum = sum + 4.0 / (1.0 + x*x);  
   }  
  
   pi = step * sum;  
   return pi;  
}  
  
int main(int argc, char* argv[]) {  
   double   d;  
   int n = 1000000;  
  
   if (argc > 1)  
      n = atoi(argv[1]);  
  
   dwStart = GetTickCount();  
   d = test2(n);  
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);  
  
   dwStart = GetTickCount();  
   d = test2(n);  
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)