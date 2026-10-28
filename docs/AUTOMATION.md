# Automation setup

## 1. Future accepted submissions (browser-side)

Use [LeetHub v2 on the Chrome Web Store](https://chromewebstore.google.com/detail/leethub-v2/mhanfgfagplhgemhjfeolkkdidbakocm) or [LeetHub](https://chromewebstore.google.com/detail/leethub-leetcode-to-githu/igcdoidkkmchcpanpfbpcghbfldjfjfo).

1. Install the extension in the browser where you use LeetCode.
2. Sign in to LeetCode and GitHub in that same browser.
3. Authorize the extension and select **Aadil-Mansuri0/LeetCode-Solutions** as the target repository.
4. Submit a test problem and verify the file appears in this repository.
5. Check the extension's filename/path behavior for re-submissions before relying on it.

The extension is a browser-side integration. It cannot be enabled or authorized remotely by a GitHub repository commit; the user must complete its browser permission/authorization steps.

## 2. Duplicate and improved-solution policy

The canonical key is the LeetCode problem number (preferred) and title slug (fallback). A re-submission of an existing problem should update the same problem folder. A new approach should be added to the existing folder with an explicit label such as `Approach 2 — Optimized`; do not create another problem folder.

## 3. Historical migration limitations

A public LeetCode profile is not a complete export of every accepted submission's code. The profile may expose only a limited recent accepted-submission list, and it does not reliably provide the full source code for all older submissions. Historical imports must use source code that is actually accessible (for example, a user's exported submissions or opened submission details). Do not invent the user's original code.

## 4. Daily historical import

The intended pace is one verified historical solution per day. A daily run can only commit a solution when its actual source code and problem identity are accessible and the repository does not already contain that problem. If source code is unavailable, leave the queue unchanged and report what is needed rather than pushing fabricated code.
