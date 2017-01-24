---
title: "/openmp (Attiva supporto OpenMP 2.0) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/openmp"
  - "VC.Project.VCCLCompilerTool.OpenMP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/openmp (opzione del compilatore) [C++]"
  - "-openmp (opzione del compilatore) [C++]"
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /openmp (Attiva supporto OpenMP 2.0)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina l'elaborazione di `#pragma` [omp](../../preprocessor/omp.md) da parte del compilatore.  
  
## Sintassi  
  
```  
/openmp  
```  
  
## Note  
 `#pragma omp` viene utilizzato per specificare [Directives](../../parallel/openmp/reference/openmp-directives.md) e [Clauses](../../parallel/openmp/reference/openmp-clauses.md).  Se in una compilazione non viene specificato **\/openmp**, le clausole e le direttive OpenMP verranno ignorate.  Le chiamate alla [funzione OpenMP](../../parallel/openmp/reference/openmp-functions.md) vengono elaborate dal compilatore anche se non viene specificato **\/openmp**.  
  
 Un'applicazione compilata con **\/openmp** e che utilizzi [Libraries](../../parallel/openmp/reference/openmp-libraries.md) può essere eseguita solo nel sistema operativo Windows 2000 e versioni successive.  
  
 Le applicazioni compilate con **\/openmp** e **\/clr** possono essere eseguite solo su un singolo processo del dominio applicazione. I domini applicazione multipli non sono supportati.  In altri termini, quando viene eseguito il costruttore di moduli \(.cctor\), verrà rilevato se il processo viene compilato con **\/openmp** e se l'applicazione viene caricata in un runtime non predefinito.  Per ulteriori informazioni, vedere [appdomain](../../cpp/appdomain.md), [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) e [Inizializzazione di assembly misti](../../dotnet/initialization-of-mixed-assemblies.md).  
  
 Se si tenta di caricare un'applicazione compilata con **\/openmp** e **\/clr** in un dominio applicazione non predefinito, verranno generate un'eccezione <xref:System.TypeInitializationException> all'esterno del debugger e un'eccezione OpenMPWithMultipleAppdomainsException all'interno del debugger.  
  
 Queste eccezioni possono essere generate anche nelle seguenti situazioni:  
  
-   Se l'applicazione compilata con **\/clr**, ma non con **\/openmp**, viene caricata in un dominio applicazione non predefinito, il cui processo include un'applicazione compilata precedentemente con **\/openmp**.  
  
-   Se l'applicazione **\/clr** viene passata a un'utilità, ad esempio regasm.exe \([Regasm.exe \(Assembly Registration Tool\)](../Topic/Regasm.exe%20\(Assembly%20Registration%20Tool\).md)\), che carica i relativi assembly di destinazione in un dominio applicazione non predefinito.  
  
 La sicurezza contro l'accesso di codice di Common Language Runtime non funziona nelle aree OpenMP.  Se un attributo di sicurezza contro l'accesso di codice CLR viene applicato all'esterno di un'area parallela, non sarà attivo in tale area.  
  
 Si consiglia di non scrivere applicazioni **\/openmp** che consentono chiamanti parzialmente affidabili utilizzando <xref:System.Security.AllowPartiallyTrustedCallersAttribute> o qualsiasi attributo di sicurezza contro l'accesso di codice CLR.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **C\/C\+\+**.  
  
4.  Selezionare la pagina delle proprietà **Linguaggio**.  
  
5.  Modificare la proprietà **Supporto OpenMP**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.  
  
## Esempio  
 Nell'esempio riportato di seguito vengono illustrati alcuni degli effetti derivanti dall'avvio di Threadpool rispetto all'utilizzo di Threadpool dopo l'avvio.  Supponendo di utilizzare un sistema con due processori x64 single\-core, l'avvio di Threadpool richiede circa 16 ms.  Successivamente, tuttavia, i tempi necessari per Threadpool risultano estremamente ridotti.  
  
 Se si esegue la compilazione con **\/openmp**, la seconda chiamata a test2 non viene mai eseguita per un intervallo di tempo superiore rispetto a quanto richiede la compilazione con **\/openmp\-**. Threadpool, infatti, non viene avviato.  A un milione di iterazioni la versione **\/openmp** risulta più veloce rispetto alla versione **\/openmp\-** per la seconda chiamata a test2, mentre a 25 iterazioni entrambe le versioni **\/openmp\-** e **\/openmp** registrano tempi inferiori alla granularità dell'orologio di sistema.  
  
 Se pertanto l'applicazione è costituita da un solo ciclo che viene eseguito in meno di 15 ms \(adattato al sovraccarico approssimativo previsto sul computer\), l'utilizzo di **\/openmp** potrebbe non essere appropriato. Se invece l'applicazione è costituita da più cicli, è opportuno considerare l'utilizzo di **\/openmp**.  
  
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
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)